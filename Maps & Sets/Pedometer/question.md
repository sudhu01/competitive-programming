# D - Pedometer

**[AtCoder](https://atcoder.jp/contests/abc367/tasks/abc367_d)**

**Score:** `400` points

---

## Problem Statement

There are `N` rest areas around a lake.

The rest areas are numbered `1`, `2`, ..., `N` in clockwise order.

It takes `A_i` steps to walk clockwise from rest area `i` to rest area `i+1` (where rest area `N+1` refers to rest area `1`).

The minimum number of steps required to walk clockwise from rest area `s` to rest area `t` (`s ≠ t`) is a multiple of `M`.

Find the number of possible pairs `(s, t)`.

---

## Constraints

* All input values are integers.
* `2 ≤ N ≤ 2 × 10⁵`
* `1 ≤ A_i ≤ 10⁹`
* `1 ≤ M ≤ 10⁶`

---

## Input

The input is given from Standard Input in the following format:

```text
N M
A_1 A_2 … A_N
```

---

## Output

Print the answer as an integer.

---

## Examples

### Example 1

**Input**

```text
4 3
2 1 4 3
```

**Output**

```text
4
```

---

### Example 2

**Input**

```text
2 1000000
1 1
```

**Output**

```text
0
```

---

### Example 3

**Input**

```text
9 5
9 9 8 2 4 4 3 5 3
```

**Output**

```text
11
```
