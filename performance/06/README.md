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
| `fhessel` | 26.0 ± 0.2 | 25.7 | 27.0 | 9.04 ± 0.30 |
| `s1effen` | 19.8 ± 0.3 | 19.5 | 22.1 | 6.88 ± 0.24 |
| `gh0st42` | 2.9 ± 0.1 | 2.7 | 3.8 | 1.00 |
| `tobi` | 20.1 ± 0.5 | 19.7 | 24.7 | 6.98 ± 0.28 |


## Used Commit SHAs

| Contributor | Commit SHA | Output Testrun |
| ----------- | ---------- | -------------- |
| fhessel | [07376b9](https://github.com/LOEWE-emergenCITY/AdventOfCode2022/tree/07376b988207787bedeaa364e9e8dc486878a4d0/06) | [stdout](06/fhessel.txt) [stderr](06/fhessel-stderr.txt) |
| s1effen | [9355d8a](https://github.com/LOEWE-emergenCITY/AdventOfCode2022/tree/9355d8abdf39336d296417f40cadf254221c69ad/06) | [stdout](06/s1effen.txt) [stderr](06/s1effen-stderr.txt) |
| gh0st42 | [75af172](https://github.com/LOEWE-emergenCITY/AdventOfCode2022/tree/75af17250e24ccc63480331829144b39ee4b961d/06) | [stdout](06/gh0st42.txt) [stderr](06/gh0st42-stderr.txt) |
| tobi | [a2e0a87](https://github.com/LOEWE-emergenCITY/AdventOfCode2022/tree/a2e0a876a17dae1657e3691e4e6bb6deadbb679c/06) | [stdout](06/tobi.txt) [stderr](06/tobi-stderr.txt) |


