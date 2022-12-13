# Day 11: Monkey in the Middle

Link to the challenge: [Day 11: Monkey in the Middle](https://adventofcode.com/2022/day/11)

## Testing Results

Each branch is checked whether it returns the right results and does not return RC!=0.

| Branch | Return Code | Result Task 1 | Result Task 2 |
| ------ | ----------- | ------------- | ------------- |
| s1effen | ❌ No challenge executable | ❔ | ❔ |
| gh0st42 | ❌ No challenge executable | ❔ | ❔ |
| tobi | ❌ No challenge executable | ❔ | ❔ |
| fhessel | ✔️ 0 | ✔️ | ❌ (got `316888`) |
| CryptoCopter | ✔️ 0 | ✔️ | ✔️ |
| fput | ✔️ 0 | ✔️ | ✔️ |

## Performance Results

| Command | Mean [ms] | Min [ms] | Max [ms] | Relative |
|:---|---:|---:|---:|---:|
| `CryptoCopter` | 433.1 ± 11.8 | 426.7 | 466.0 | 1.00 |
| `fput` | 2956.7 ± 5.7 | 2948.8 | 2964.6 | 6.83 ± 0.19 |


## Used Commit SHAs

| Contributor | Commit SHA | Output Testrun |
| ----------- | ---------- | -------------- |
| fhessel | [9aa4eb8](https://github.com/LOEWE-emergenCITY/AdventOfCode2022/tree/9aa4eb84a59991ac6940e1ee57c5f5ff2667a98e/11) | [stdout](11/fhessel.txt) [stderr](11/fhessel-stderr.txt) |
| CryptoCopter | [f6215f9](https://github.com/LOEWE-emergenCITY/AdventOfCode2022/tree/f6215f9fa70663fd77f0585b00eda2e449d0b7a8/11) | [stdout](11/CryptoCopter.txt) [stderr](11/CryptoCopter-stderr.txt) |
| fput | [d572883](https://github.com/LOEWE-emergenCITY/AdventOfCode2022/tree/d5728833145be6952fab50f1f975897bdedb8dc3/11) | [stdout](11/fput.txt) [stderr](11/fput-stderr.txt) |


