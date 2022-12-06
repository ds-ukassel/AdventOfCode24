# Day 06: Tuning Trouble

Link to the challenge: [Day 06: Tuning Trouble](https://adventofcode.com/2022/day/6)

## Testing Results

Each branch is checked whether it returns the right results and does not return RC!=0.

| Branch | Return Code | Result Task 1 | Result Task 2 |
| ------ | ----------- | ------------- | ------------- |
| CryptoCopter | ❌ No challenge executable | ❔ | ❔ |
| fput | ❌ No challenge executable | ❔ | ❔ |
| fhessel | ✔️ 0 | ✔️ | ✔️ |
| s1effen | ✔️ 0 | ✔️ | ✔️ |
| gh0st42 | ✔️ 0 | ✔️ | ✔️ |
| tobi | ✔️ 0 | ✔️ | ✔️ |

## Performance Results

| Command | Mean [ms] | Min [ms] | Max [ms] | Relative |
|:---|---:|---:|---:|---:|
| `fhessel` | 34.1 ± 1.3 | 31.8 | 37.5 | 9.63 ± 1.72 |
| `s1effen` | 26.2 ± 1.5 | 23.8 | 34.7 | 7.42 ± 1.36 |
| `gh0st42` | 3.5 ± 0.6 | 2.6 | 12.8 | 1.00 |
| `tobi` | 26.8 ± 1.6 | 24.5 | 36.1 | 7.56 ± 1.39 |


## Used Commit SHAs

| Contributor | Commit SHA | Output Testrun |
| ----------- | ---------- | -------------- |
| fhessel | [07376b9](https://github.com/LOEWE-emergenCITY/AdventOfCode2022/tree/07376b988207787bedeaa364e9e8dc486878a4d0/06) | [stdout](06/fhessel.txt) [stderr](06/fhessel-stderr.txt) |
| s1effen | [ac593dc](https://github.com/LOEWE-emergenCITY/AdventOfCode2022/tree/ac593dc324b87a84236315c8c8dd8c9d5d98c756/06) | [stdout](06/s1effen.txt) [stderr](06/s1effen-stderr.txt) |
| gh0st42 | [75af172](https://github.com/LOEWE-emergenCITY/AdventOfCode2022/tree/75af17250e24ccc63480331829144b39ee4b961d/06) | [stdout](06/gh0st42.txt) [stderr](06/gh0st42-stderr.txt) |
| tobi | [a2e0a87](https://github.com/LOEWE-emergenCITY/AdventOfCode2022/tree/a2e0a876a17dae1657e3691e4e6bb6deadbb679c/06) | [stdout](06/tobi.txt) [stderr](06/tobi-stderr.txt) |


