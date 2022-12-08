# Day 07: No Space Left On Device

Link to the challenge: [Day 07: No Space Left On Device](https://adventofcode.com/2022/day/7)

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
| `fhessel` | 25.9 ± 0.3 | 25.3 | 27.0 | 11.59 ± 0.94 |
| `CryptoCopter` | 16.1 ± 0.3 | 15.7 | 18.0 | 7.22 ± 0.59 |
| `s1effen` | 19.2 ± 0.4 | 18.5 | 21.4 | 8.60 ± 0.71 |
| `gh0st42` | 2.2 ± 0.2 | 2.1 | 6.3 | 1.00 |
| `tobi` | 24.1 ± 0.4 | 23.5 | 25.5 | 10.77 ± 0.88 |


## Used Commit SHAs

| Contributor | Commit SHA | Output Testrun |
| ----------- | ---------- | -------------- |
| fhessel | [fa26ef7](https://github.com/LOEWE-emergenCITY/AdventOfCode2022/tree/fa26ef756756b981e6904b2ea91d089694fb87ab/07) | [stdout](07/fhessel.txt) [stderr](07/fhessel-stderr.txt) |
| CryptoCopter | [b976906](https://github.com/LOEWE-emergenCITY/AdventOfCode2022/tree/b9769060152e5f414c3e6469a7fa7e0eaf24f755/07) | [stdout](07/CryptoCopter.txt) [stderr](07/CryptoCopter-stderr.txt) |
| s1effen | [92fae54](https://github.com/LOEWE-emergenCITY/AdventOfCode2022/tree/92fae54cfc0d021aaa59f4b7be77abfce07577ab/07) | [stdout](07/s1effen.txt) [stderr](07/s1effen-stderr.txt) |
| gh0st42 | [09a8d91](https://github.com/LOEWE-emergenCITY/AdventOfCode2022/tree/09a8d917641fb1697c5c0d65a088b8cb7ea8ba03/07) | [stdout](07/gh0st42.txt) [stderr](07/gh0st42-stderr.txt) |
| tobi | [65461af](https://github.com/LOEWE-emergenCITY/AdventOfCode2022/tree/65461af25dfe92fc86817fce8cbbda19db3d638a/07) | [stdout](07/tobi.txt) [stderr](07/tobi-stderr.txt) |


