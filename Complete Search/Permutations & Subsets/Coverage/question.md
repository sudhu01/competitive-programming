# C - Coverage

- **Time Limit:** 2 seconds
- **Memory Limit:** 1024 MiB
- **Score:** 300 points
- **Source:** [AtCoder - ABC289 C](https://atcoder.jp/contests/abc289/tasks/abc289_c)

## Problem Statement

There are **M** sets, called **S₁, S₂, ..., Sₘ**, each consisting of integers between **1** and **N**.

The set **Sᵢ** consists of **Cᵢ** integers:

```text
aᵢ,₁, aᵢ,₂, ..., aᵢ,₍Cᵢ₎
```

There are:

```text
2ᴹ − 1
```

ways to choose one or more sets from the **M** sets.

Determine how many of these choices satisfy the following condition:

> For every integer **x** such that **1 ≤ x ≤ N**, there is at least one chosen set that contains **x**.

In other words, count the number of ways to choose sets such that **all N integers are covered**.

---

## Constraints

- **1 ≤ N ≤ 10**
- **1 ≤ M ≤ 10**
- **1 ≤ Cᵢ ≤ N**
- **1 ≤ aᵢ,₁ < aᵢ,₂ < ... < aᵢ,₍Cᵢ₎ ≤ N**
- All input values are integers.

---

## Input

The input is given from standard input in the following format:

```text
N M
C₁
a₁,₁ a₁,₂ ... a₁,₍C₁₎
C₂
a₂,₁ a₂,₂ ... a₂,₍C₂₎
⋮
Cₘ
aₘ,₁ aₘ,₂ ... aₘ,₍Cₘ₎
```

---

## Output

Print the number of ways to choose sets that satisfy the condition described in the problem statement.

---

## Examples

### Example 1

#### Input

```text
3 3
2
1 2
2
1 3
1
2
```

#### Output

```text
3
```

---

### Example 2

#### Input

```text
4 2
2
1 2
2
1 3
```

#### Output

```text
0
```

---

### Example 3

#### Input

```text
6 6
3
2 3 6
3
2 4 6
2
3 6
3
1 5 6
3
1 3 6
2
1 4
```

#### Output

```text
18
```