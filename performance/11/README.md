# Day 11: Monkey in the Middle

Link to the challenge: [Day 11: Monkey in the Middle](https://adventofcode.com/2022/day/11)

## Testing Results

Each branch is checked whether it returns the right results and does not return RC!=0.

| Branch | Return Code | Result Task 1 | Result Task 2 |
| ------ | ----------- | ------------- | ------------- |
| CryptoCopter | ❌ No challenge executable | ❔ | ❔ |
| s1effen | ❌ No challenge executable | ❔ | ❔ |
| gh0st42 | ❌ No challenge executable | ❔ | ❔ |
| tobi | ❌ No challenge executable | ❔ | ❔ |
| fhessel | ✔️ 0 | ❌ (got `Round 1`) | ❌ (got `id:  2465, 1323, 2080, 972, 2296, 33, 23, 33, 22, 24, 33, 9, 4, 4, 14, 12`) |
| fput | ✔️ 0 | ✔️ | ✔️ |

## Performance Results

| Command | Mean [s] | Min [s] | Max [s] | Relative |
|:---|---:|---:|---:|---:|
| `fput` | 3.553 ± 0.042 | 3.489 | 3.596 | 1.00 |


## Used Commit SHAs

| Contributor | Commit SHA | Output Testrun |
| ----------- | ---------- | -------------- |
| fhessel | [11e2756](https://github.com/LOEWE-emergenCITY/AdventOfCode2022/tree/11e275610902d1156c652d849d81cc7cc7246aee/11) | [stdout](11/fhessel.txt) [stderr](11/fhessel-stderr.txt) |
| fput | [d572883](https://github.com/LOEWE-emergenCITY/AdventOfCode2022/tree/d5728833145be6952fab50f1f975897bdedb8dc3/11) | [stdout](11/fput.txt) [stderr](11/fput-stderr.txt) |


