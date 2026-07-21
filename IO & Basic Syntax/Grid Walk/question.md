# Grid Walk

- **Time Limit:** 2 seconds
- **Memory Limit:** 1024 MiB
- **Score:** 200 points

## Problem Statement

There is a grid with **H** rows and **W** columns.

Let **(i, j)** denote the cell at the **i-th** row from the top and the **j-th** column from the left.

- Cell **(i, j)** is **empty** if `C[i][j] = '.'`.
- Otherwise, it is **blocked** if `C[i][j] = '#'`.

Takahashi starts at cell **(Si, Sj)** and performs the actions described by the string **X**, processing its characters from left to right.

For each character:

- **L**: Move one cell to the left if that cell exists and is empty. Otherwise, stay in the current cell.
- **R**: Move one cell to the right if that cell exists and is empty. Otherwise, stay in the current cell.
- **U**: Move one cell upward if that cell exists and is empty. Otherwise, stay in the current cell.
- **D**: Move one cell downward if that cell exists and is empty. Otherwise, stay in the current cell.

After performing all actions, print Takahashi's final position.

---

## Constraints

- **1 ≤ H, W ≤ 50**
- **1 ≤ Si ≤ H**
- **1 ≤ Sj ≤ W**
- **H, W, Si,** and **Sj** are integers.
- Each `C[i][j]` is either `'.'` or `'#'`.
- `C[Si][Sj] = '.'`
- **X** is a string of length **1 to 50**, consisting only of the characters `L`, `R`, `U`, and `D`.

---

## Input

The input is given from standard input in the following format:

```text
H W
Si Sj
C1
C2
...
CH
X
```

where:

- `Ci` is the string representing the **i-th** row of the grid.

---

## Output

Let **(x, y)** be Takahashi's final position.

Print:

```text
x y
```

---

## Sample Input 1

```text
2 3
2 1
.#.
...
ULDRU
```

## Sample Output 1

```text
2 2
```

### Explanation

Takahashi starts at **(2, 1)**.

1. `U` → Moves to **(1, 1)**.
2. `L` → Left cell does not exist, so he stays.
3. `D` → Moves back to **(2, 1)**.
4. `R` → Moves to **(2, 2)**.
5. `U` → Cell above is blocked (`#`), so he stays.

Final position:

```text
2 2
```

---

## Sample Input 2

```text
4 4
4 2
....
.#..
...#
....
DUUUURULRD
```

## Sample Output 2

```text
2 4
```

---

## Sample Input 3

```text
6 6
1 1
.#####
######
######
######
######
######
RURLDLULLRULRDL
```

## Sample Output 3

```text
1 1
```