# Day 07: No Space Left On Device

Link to the challenge: [Day 07: No Space Left On Device](https://adventofcode.com/2022/day/7)

## Testing Results

Each branch is checked whether it returns the right results and does not return RC!=0.

| Branch | Return Code | Result Task 1 | Result Task 2 |
| ------ | ----------- | ------------- | ------------- |
| fput | ❌ No challenge executable | ❔ | ❔ |
| fhessel | ✔️ 0 | ✔️ | ✔️ |
| CryptoCopter | ✔️ 0 | ✔️ | ✔️ |
| s1effen | ✔️ 0 | ✔️ | ❌ (got `681155`) |
| gh0st42 | ✔️ 0 | ✔️ | ✔️ |
| tobi | ✔️ 0 | ✔️ | ✔️ |

## Performance Results

| Command | Mean [ms] | Min [ms] | Max [ms] | Relative |
|:---|---:|---:|---:|---:|
| `fhessel` | 26.1 ± 0.4 | 25.5 | 27.3 | 12.66 ± 1.25 |
| `CryptoCopter` | 16.3 ± 1.0 | 15.7 | 29.0 | 7.91 ± 0.92 |
| `gh0st42` | 2.1 ± 0.2 | 1.9 | 7.5 | 1.00 |
| `tobi` | 23.6 ± 0.5 | 22.8 | 27.9 | 11.46 ± 1.15 |


## Used Commit SHAs

| Contributor | Commit SHA | Output Testrun |
| ----------- | ---------- | -------------- |
| fhessel | [662dbe8](https://github.com/LOEWE-emergenCITY/AdventOfCode2022/tree/662dbe8c31f1a414cc085a92472b31b19a481d0d/07) | [stdout](07/fhessel.txt) [stderr](07/fhessel-stderr.txt) |
| CryptoCopter | [eddc770](https://github.com/LOEWE-emergenCITY/AdventOfCode2022/tree/eddc77061d5ac58f222db1990caef276a09b9d64/07) | [stdout](07/CryptoCopter.txt) [stderr](07/CryptoCopter-stderr.txt) |
| s1effen | [ee70709](https://github.com/LOEWE-emergenCITY/AdventOfCode2022/tree/ee707090b144f5357ab3dc2d03ff8bce26db5c24/07) | [stdout](07/s1effen.txt) [stderr](07/s1effen-stderr.txt) |
| gh0st42 | [392f6fe](https://github.com/LOEWE-emergenCITY/AdventOfCode2022/tree/392f6fef8abbed5b469dcc996606f9d2a55a2747/07) | [stdout](07/gh0st42.txt) [stderr](07/gh0st42-stderr.txt) |
| tobi | [65461af](https://github.com/LOEWE-emergenCITY/AdventOfCode2022/tree/65461af25dfe92fc86817fce8cbbda19db3d638a/07) | [stdout](07/tobi.txt) [stderr](07/tobi-stderr.txt) |


