# B - Gentle Pairs

- **Time Limit:** 2 seconds
- **Memory Limit:** 1024 MiB
- **Score:** 200 points
- **Source:** [AtCoder - ABC187 B](https://atcoder.jp/contests/abc187/tasks/abc187_b)

## Problem Statement

On the **xy-plane**, there are **N** points numbered from **1** to **N**.

Point **i** is located at **(xᵢ, yᵢ)**.

The **x-coordinates of all N points are pairwise distinct**.

Find the number of pairs of integers **(i, j)** satisfying:

- **i < j**
- The line passing through Point **i** and Point **j** has a slope between **−1** and **1**, inclusive.

---

## Constraints

- All values in the input are integers.
- **1 ≤ N ≤ 10³**
- **|xᵢ|, |yᵢ| ≤ 10³**
- **xᵢ ≠ xⱼ** for all **i ≠ j**

---

## Input

The input is given from standard input in the following format:

```text
N
x₁ y₁
⋮
xₙ yₙ
```

---

## Output

Print the number of pairs satisfying the condition.

---

## Examples

### Example 1

#### Input

```text
3
0 0
1 2
2 1
```

#### Output

```text
2
```

---

### Example 2

#### Input

```text
1
-691 273
```

#### Output

```text
0
```

---

### Example 3

#### Input

```text
10
-31 -35
8 -36
22 64
5 73
-14 8
18 -58
-41 -85
1 -88
-21 -85
-11 82
```

#### Output

```text
16
```