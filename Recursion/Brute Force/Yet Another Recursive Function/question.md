# D - Yet Another Recursive Function

**[AtCoder](https://atcoder.jp/contests/abc275/tasks/abc275_d)**

**Time Limit:** 2 sec  
**Memory Limit:** 1024 MiB  
**Score:** 400 points

---

## Problem Statement

A function `f(x)` defined for non-negative integers `x` satisfies the following conditions:

- `f(0) = 1`.
- `f(k) = f(⌊k/2⌋) + f(⌊k/3⌋)` for any positive integer `k`.

Here, `⌊A⌋` denotes the value of `A` rounded down to an integer.

Find `f(N)`.

---

## Constraints

- `N` is an integer satisfying `0 <= N <= 10^18`.

---

## Input

The input is given from Standard Input in the following format:

```text
N
```

## Output

Print the answer.

---

## Examples

### Example 1

**Input:**
```text
2
```

**Output:**
```text
3
```

### Example 2

**Input:**
```text
0
```

**Output:**
```text
1
```

### Example 3

**Input:**
```text
100
```

**Output:**
```text
55
```