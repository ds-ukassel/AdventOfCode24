# Day 06: Tuning Trouble

Link to the challenge: [Day 06: Tuning Trouble](https://adventofcode.com/2022/day/6)

## Testing Results

Each branch is checked whether it returns the right results and does not return RC!=0.

| Branch | Return Code | Result Task 1 | Result Task 2 |
| ------ | ----------- | ------------- | ------------- |
| fput | ❌ No challenge executable | ❔ | ❔ |
| fhessel | ✔️ 0 | ✔️ | ✔️ |
| CryptoCopter | ✔️ 0 | ✔️ | ✔️ |
| s1effen | ✔️ 0 | ✔️ | ✔️ |
| gh0st42 | ✔️ 0 | ✔️ | ✔️ |
| tobi | ✔️ 0 | ✔️ | ✔️ |

## Performance Results

| Command | Mean [ms] | Min [ms] | Max [ms] | Relative |
|:---|---:|---:|---:|---:|
| `fhessel` | 31.7 ± 1.6 | 29.2 | 37.5 | 9.57 ± 0.95 |
| `CryptoCopter` | 20.3 ± 0.9 | 18.4 | 23.7 | 6.11 ± 0.59 |
| `s1effen` | 24.0 ± 1.6 | 22.0 | 37.5 | 7.24 ± 0.79 |
| `gh0st42` | 3.3 ± 0.3 | 2.8 | 5.9 | 1.00 |
| `tobi` | 24.1 ± 1.1 | 22.1 | 26.8 | 7.27 ± 0.70 |


## Used Commit SHAs

| Contributor | Commit SHA | Output Testrun |
| ----------- | ---------- | -------------- |
| fhessel | [07376b9](https://github.com/LOEWE-emergenCITY/AdventOfCode2022/tree/07376b988207787bedeaa364e9e8dc486878a4d0/06) | [stdout](06/fhessel.txt) [stderr](06/fhessel-stderr.txt) |
| CryptoCopter | [f751f1e](https://github.com/LOEWE-emergenCITY/AdventOfCode2022/tree/f751f1e7de71e1553d7406a17a9a7783988f9085/06) | [stdout](06/CryptoCopter.txt) [stderr](06/CryptoCopter-stderr.txt) |
| s1effen | [565d790](https://github.com/LOEWE-emergenCITY/AdventOfCode2022/tree/565d790c324d28c1106330d267ed470e6421a939/06) | [stdout](06/s1effen.txt) [stderr](06/s1effen-stderr.txt) |
| gh0st42 | [75af172](https://github.com/LOEWE-emergenCITY/AdventOfCode2022/tree/75af17250e24ccc63480331829144b39ee4b961d/06) | [stdout](06/gh0st42.txt) [stderr](06/gh0st42-stderr.txt) |
| tobi | [a2e0a87](https://github.com/LOEWE-emergenCITY/AdventOfCode2022/tree/a2e0a876a17dae1657e3691e4e6bb6deadbb679c/06) | [stdout](06/tobi.txt) [stderr](06/tobi-stderr.txt) |


