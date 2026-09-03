# B - Coins

- **Time Limit:** 2 seconds
- **Memory Limit:** 256 MB
- **Score:** 200 points
- **Source:** [AtCoder - ABC087 B](https://atcoder.jp/contests/abc087/tasks/abc087_b)

## Problem Statement

You have:

- **A** 500-yen coins
- **B** 100-yen coins
- **C** 50-yen coins

Determine the number of ways to select some of these coins so that their total value is exactly **X** yen.

Coins of the same kind are indistinguishable.

Two ways of selecting coins are considered different if, for at least one type of coin, the number of selected coins of that type is different.

---

## Constraints

- **0 ≤ A, B, C ≤ 50**
- **A + B + C ≥ 1**
- **50 ≤ X ≤ 20,000**
- **A**, **B**, **C**, and **X** are integers.
- **X** is a multiple of 50.

---

## Input

The input is given from standard input in the following format:

```text
A
B
C
X
```

---

## Output

Print the number of ways to select the coins such that their total value is exactly **X** yen.

---

## Examples

### Example 1

#### Input

```text
2
2
2
100
```

#### Output

```text
2
```

---

### Example 2

#### Input

```text
5
1
0
150
```

#### Output

```text
0
```

---

### Example 3

#### Input

```text
30
40
50
6000
```

#### Output

```text
213
```