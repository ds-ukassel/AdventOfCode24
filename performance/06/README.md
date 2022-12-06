# Day 06: Tuning Trouble

Link to the challenge: [Day 06: Tuning Trouble](https://adventofcode.com/2022/day/6)

## Testing Results

Each branch is checked whether it returns the right results and does not return RC!=0.

| Branch | Return Code | Result Task 1 | Result Task 2 |
| ------ | ----------- | ------------- | ------------- |
| CryptoCopter | ❌ No challenge executable | ❔ | ❔ |
| gh0st42 | ❌ No challenge executable | ❔ | ❔ |
| fput | ❌ No challenge executable | ❔ | ❔ |
| fhessel | ✔️ 0 | ✔️ | ✔️ |
| s1effen | ✔️ 0 | ✔️ | ✔️ |
| tobi | ✔️ 0 | ✔️ | ✔️ |

## Performance Results

| Command | Mean [ms] | Min [ms] | Max [ms] | Relative |
|:---|---:|---:|---:|---:|
| `fhessel` | 26.0 ± 0.7 | 25.6 | 32.2 | 1.30 ± 0.03 |
| `s1effen` | 20.1 ± 0.2 | 19.7 | 21.5 | 1.00 |
| `tobi` | 20.5 ± 0.8 | 19.9 | 24.4 | 1.02 ± 0.04 |


## Used Commit SHAs

| Contributor | Commit SHA | Output Testrun |
| ----------- | ---------- | -------------- |
| fhessel | [07376b9](https://github.com/LOEWE-emergenCITY/AdventOfCode2022/tree/07376b988207787bedeaa364e9e8dc486878a4d0/06) | [stdout](06/fhessel.txt) [stderr](06/fhessel-stderr.txt) |
| s1effen | [9355d8a](https://github.com/LOEWE-emergenCITY/AdventOfCode2022/tree/9355d8abdf39336d296417f40cadf254221c69ad/06) | [stdout](06/s1effen.txt) [stderr](06/s1effen-stderr.txt) |
| tobi | [a2e0a87](https://github.com/LOEWE-emergenCITY/AdventOfCode2022/tree/a2e0a876a17dae1657e3691e4e6bb6deadbb679c/06) | [stdout](06/tobi.txt) [stderr](06/tobi-stderr.txt) |


