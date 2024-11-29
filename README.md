# Advent of Code

[🎄 Challenges](https://adventofcode.com/2024) · [🏆 Leaderboard](https://adventofcode.com/2024/leaderboard) · [📈 Benchmarks](https://github.com/ds-ukassel/AdventOfCode24/blob/main/performance/README.md)

Event of code is a daily coding challange starting from Dec. 1 - Dec. 25.
Find more information on the [Advent of Code](https://adventofcode.com/) project website.

Challenges are published each day at midnight EST, which means 6:00am CET in Germany.

## Verteilte Systeme and AoC 2024

The Distributed Systems group is hosting a 10 day challenge for anyone that wants to participate. The winner will be the one that has the lowest average execution time!
To discuss challenges join the [Discord](https://discord.gg/4YQKansqNT) and select the appropriate role (AoC). **No Spoilers!** – If you want to discuss today's challenge, use the spoiler tags!

There is also a [private leaderboard](https://adventofcode.com/2024/leaderboard), which you can join by entering the code `TBA` on the AoC website.

## RULES

The use of any AI help tools (incl. ChatGPT, Gemini, etc.) is **strictly prohibited** as that makes it unfun and unfair! We don't want to compete with AI but with other mere mortals :) 

## Setup the repository

This repository allows for sharing your solution and, optionally, take part in a benchmarking to find the fastest solution.

To do so:

**Clone the repository and switch to your personal branch:**

Replace your username in the script below, then follow the actions.

```bash
GITHUB_USERNAME="Your GitHub username goes here"

# Clone the repository
git clone https://github.com/ds-ukassel/AdventOfCode24.git
cd AdventOfCode24

# (only if you want to participate in benchmarking):
# Add yourself to the list of evaluated branches
echo "$GITHUB_USERNAME" >> .github/scripts/branches
.github/scripts/update-workflow.sh
git commit -m "Add $GITHUB_USERNAME to benchmarks" .github/scripts/branches .github/workflows/benchmark.yml

# Checkout your personal branch. DO NOT commit your code to the main branch!
git checkout -b "$GITHUB_USERNAME"
git push origin "$GITHUB_USERNAME"

# Create a pull request to add yourself to the benchmarking
gh pr create --title "Add $GITHUB_USERNAME" --body "Add $GITHUB_USERNAME to benchmarks" --base main
```

**For each challenge:**

You have a project folder for each day, which you can use to store the files for the challenge.

Within the folder, there is a `prepare.sh` file.
That file will be called **before** the benchmark is run and is not part of measuring the time.
This file has to to everything needed to create an **executable** file called `challenge` in that directory, which prints the solution to the first challenge in the first line, and the solution to the second challenge in the second line.
We benchmark both challenges together, as usually the second one extends the first one.
The name of the file to read is contained in `argv[1]`.

Tasks you want to do in the `prepare.sh` script are, for example:

- Install additional software, runtimes, … needed for your program
- Compile your program
- Setup a virtual environment for Python with the required libraries
- ...

There are some example snippets on what you could to already in the script.

The [folder for challenge 00](./00) contains an example for a Python script that prints the solutions `42` and `23`.
Please note that your could also call the Python script `challenge` directly, which would make the move operation in `prepare.sh` obsolte – it's just there to demonstrate the principle.

Finally, remove the `skip` file located in your repository, so your solution is included in the benchmark!

## Running a benchmark

Since we are on a limited budget with runner times, We will benchmark all the submissions once or twice a day and the results will be updated automatically.

You can find the results in [the performance folder of the main branch](https://github.com/ds-ukassel/AdventOfCode24/blob/main/performance/README.md).
