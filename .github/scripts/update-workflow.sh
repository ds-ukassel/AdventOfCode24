#!/bin/bash
SCRIPTDIR="$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )"
OUTPUT="$SCRIPTDIR/../workflows/benchmark.yml"

cat "$SCRIPTDIR/benchmark0.template" > "$OUTPUT"
for BRANCH in "$(cat "$SCRIPTDIR/branches")"; do
cat <<EOF >> "$OUTPUT"
      - name: Checkout $BRANCH
        uses: actions/checkout@v2
        with:
          path: "./$BRANCH"
          ref: "$BRANCH"
EOF
done

cat "$SCRIPTDIR/benchmark1.template" >> "$OUTPUT"