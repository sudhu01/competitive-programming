# C - Count Order

- **Time Limit:** 2 seconds
- **Memory Limit:** 1024 MiB
- **Score:** 300 points
- **Source:** [AtCoder - ABC150 C](https://atcoder.jp/contests/abc150/tasks/abc150_c)

## Problem Statement

We have two permutations **P** and **Q** of size **N**.

That is, both **P** and **Q** are rearrangements of:

```text
(1, 2, ..., N)
```

There are **N!** possible permutations of size **N**.

Among these permutations:

- **P** is the **a-th** lexicographically smallest permutation.
- **Q** is the **b-th** lexicographically smallest permutation.

Find:

```text
|a - b|
```

---

## Lexicographical Order

For two sequences **X** and **Y**, **X** is lexicographically smaller than **Y** if there exists an integer **k** such that:

```text
Xᵢ = Yᵢ  for 1 ≤ i < k
```

and

```text
Xₖ < Yₖ
```

In other words, compare the sequences from left to right. The first position where they differ determines which sequence is smaller.

---

## Constraints

- **2 ≤ N ≤ 8**
- **P** and **Q** are permutations of size **N**.

---

## Input

The input is given from standard input in the following format:

```text
N
P₁ P₂ ... Pₙ
Q₁ Q₂ ... Qₙ
```

---

## Output

Print:

```text
|a - b|
```

where **a** and **b** are the lexicographical positions of **P** and **Q**, respectively.

---

## Examples

### Example 1

#### Input

```text
3
1 3 2
3 1 2
```

#### Output

```text
3
```

---

### Example 2

#### Input

```text
8
7 3 5 4 2 1 6 8
3 8 2 5 4 6 7 1
```

#### Output

```text
17517
```

---

### Example 3

#### Input

```text
3
1 2 3
1 2 3
```

#### Output

```text
0
```