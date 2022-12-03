#!/bin/bash

DAY=$1
SCRIPTDIR="$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )"
REPOROOT="$SCRIPTDIR/../.."
WORKROOT="$REPOROOT/.."
HYPERFINE_OUTPUT="$WORKROOT/hyperfine.md"
RESULT_DIR="$REPOROOT/performance"
RESULT="$RESULT_DIR/$DAY/README.md"
INPUT_FILE="$REPOROOT/.github/challenges/$DAY.txt"
SOLUTION_TASK1="$(jq -Mj ".[\"$DAY\"][\"1\"]" "$REPOROOT/.github/challenges/solutions.json")"
SOLUTION_TASK2="$(jq -Mj ".[\"$DAY\"][\"2\"]" "$REPOROOT/.github/challenges/solutions.json")"
TASK_NAME="$(jq -Mj ".[\"$DAY\"][\"name\"]" "$REPOROOT/.github/challenges/solutions.json")"

mkdir -p "$RESULT_DIR/$DAY"
echo "# Day $DAY: $TASK_NAME" > "$RESULT"
echo "" >> "$RESULT"
echo "Link to the challenge: [Day $DAY: $TASK_NAME](https://adventofcode.com/2022/day/$(echo "$DAY" | sed 's/^0*//'))" >> "$RESULT"
echo "" >> "$RESULT"

# Create copies
for BRANCH in $(cat "$SCRIPTDIR/branches"); do
    if [ -f "$WORKROOT/$BRANCH/$DAY/Makefile" ]; then
        echo "🛷 skip file in $BRANCH/$DAY, flying directly over this repository!"
    else
        echo "$BRANCH" >> "$WORKROOT/branches_no_skip"
        echo "🎅 Santa is happy! $BRANCH has no skip file in the repository root!"
    fi
done

echo "## Testing Results" >> "$RESULT"
echo "" >> "$RESULT"
echo "Each branch is checked whether it returns the right results and does not return RC!=0." >> "$RESULT"
echo "" >> "$RESULT"
echo '| Branch | Return Code | Result Task 1 | Result Task 2 |' >> "$RESULT"
echo '| ------ | ----------- | ------------- | ------------- |' >> "$RESULT"

# Preparing
touch "$WORKROOT/branches_with_challenge"
for BRANCH in $(cat "$WORKROOT/branches_no_skip"); do
    echo "🎄 Look! $BRANCH is preparing some nice ornaments for the Christmas tree!"
    (cd "$WORKROOT/$BRANCH/$DAY" && ./prepare.sh)
    if [ -f "$WORKROOT/$BRANCH/$DAY/challenge" ]; then
        echo "🎁 $BRANCH has prepared a nice gift for us!"
        echo "$BRANCH" >> "$WORKROOT/branches_with_challenge"
    else
        echo "☃️ Hm? What's that? $BRANCH accidentally build a snowman instead of their challenge file"
        echo "| $BRANCH | ❌ No challenge executable | ❔ | ❔ |" >> "$RESULT"
    fi
done

# Doing a Test-Run
mkdir -p "$RESULT_DIR/$DAY"
for BRANCH in $(cat "$WORKROOT/branches_with_challenge"); do
    echo "Testing $BRANCH..."
    OUTFILE="$RESULT_DIR/$DAY/$BRANCH.txt"
    (cd "$WORKROOT/$BRANCH/$DAY" && ./challenge "$INPUT_FILE") > "$OUTFILE" 2>&1
    RC_CHALLENGE=$?
    RC_FLAG="✔️"
    TASK1_FLAG="✔️"
    TASK2_FLAG="✔️"
    RESULT_TASK1="–"
    RESULT_TASK2="–"
    FAILED=0
    if [ $RC_CHALLENGE -ne 0 ]; then
        echo "Calling make on $BRANCH returned RC=$RC_CHALLENGE"
        RC_FLAG="❌"
        TASK1_FLAG="❌"
        TASK2_FLAG="❌"
        FAILED=1
    else
        RESULT_TASK1="$(head -n1 $OUTFILE)"
        RESULT_TASK2="$(head -n2 $OUTFILE | tail -n1)"
        if [[ "$RESULT_TASK1" != "$SOLUTION_TASK1" ]]; then
            echo "Wrong solution for Task 1: Got $RESULT_TASK1, expected $SOLUTION_TASK1"
            TASK1_FLAG="❌ (got \`$RESULT_TASK1\`)"
            FAILED=1
        fi
        if [[ "$RESULT_TASK2" != "$SOLUTION_TASK2" ]]; then
            echo "Wrong solution for Task 2: Got $RESULT_TASK2, expected $SOLUTION_TASK2"
            TASK2_FLAG="❌ (got \`$RESULT_TASK2\`)"
            FAILED=1
        fi
    fi
    if [ $FAILED -eq 0 ]; then
        echo "$BRANCH" >> "$WORKROOT/successful_branches"
    fi
    echo "| $BRANCH | $RC_FLAG $RC_CHALLENGE | $TASK1_FLAG | $TASK2_FLAG |" >> "$RESULT"
done
echo "" >> "$RESULT"

if [ -f "$WORKROOT/successful_branches" ]; then
    # Doing the actual performance test
    ARGS=("--warmup" "5" "--export-markdown" "$HYPERFINE_OUTPUT" "--ignore-failure")
    for BRANCH in $(cat "$WORKROOT/successful_branches"); do
        ARGS+=("--command-name" "$BRANCH" "$WORKROOT/$BRANCH/$DAY/challenge $INPUT_FILE")
    done
    hyperfine  "${ARGS[@]}"

    echo "## Performance Results" >> "$RESULT"
    echo "" >> "$RESULT"
    cat "$HYPERFINE_OUTPUT" >> "$RESULT"
    echo "" >> "$RESULT"
    echo "" >> "$RESULT"
else
    echo "## Performance Results" >> "$RESULT"
    echo "" >> "$RESULT"
    echo "No branch provided the correct result, so no performance measurements were taken." >> "$RESULT"
    echo "" >> "$RESULT"
fi

echo "## Used Commit SHAs" >> "$RESULT"
echo "" >> "$RESULT"
echo '| Contributor | Commit SHA | Output Testrun |' >> "$RESULT"
echo '| ----------- | ---------- | -------------- |' >> "$RESULT"
for BRANCH in $(cat "$WORKROOT/branches_with_challenge"); do
    SHA1="$(cd "$WORKROOT/$BRANCH" && git rev-parse --short HEAD)"
    LONGSHA1="$(cd "$WORKROOT/$BRANCH" && git rev-parse HEAD)"
    BROWSE_URL="https://github.com/LOEWE-emergenCITY/AdventOfCode2022/tree/$LONGSHA1/$DAY"
    echo "| $BRANCH | [$SHA1]($BROWSE_URL) | [$BRANCH.txt]($DAY/$BRANCH.txt) |" >> "$RESULT"
done
echo "" >> "$RESULT"
echo "" >> "$RESULT"
cat "$RESULT"

# TODO: txt-File links are still broken...
cat "$RESULT_DIR"/*/README.md | sed -E 's/^#/##/' > "$RESULT_DIR/README.md"
