# C. K-th Not Divisible by n

**Time limit per test:** `1 second`
**Memory limit per test:** `256 megabytes`

---

## Problem Statement

You are given two positive integers `n` and `k`. Print the `k`-th positive integer that is not divisible by `n`.

For example, if `n = 3` and `k = 7`, then all numbers that are not divisible by `3` are:

```text
1, 2, 4, 5, 7, 8, 10, ...
```

The `7`-th number among them is `10`.

---

## Input

The first line contains an integer `t` (`1 ≤ t ≤ ...`) — the number of test cases in the input.

Next, `t` test cases are given, one per line.

Each test case consists of two positive integers `n` and `k` (`...`).

---

## Output

For each test case, print the `k`-th positive integer that is not divisible by `n`.

---

## Example

### Input

```text
6
3 7
4 12
2 1000000000
7 97
1000000000 1000000000
2 1
```

### Output

```text
10
15
1999999999
113
1000000001
1
```
