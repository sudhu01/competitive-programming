# C - Enumerate Sequences

- **Time Limit:** 2 seconds
- **Memory Limit:** 1024 MiB
- **Score:** 300 points
- **Source:** [AtCoder - ABC367 C](https://atcoder.jp/contests/abc367/tasks/abc367_c)

## Problem Statement

Print all integer sequences of length **N** that satisfy the following conditions, in **ascending lexicographical order**:

- The **i-th** element is between **1** and **Rᵢ**, inclusive.
- The sum of all elements is a multiple of **K**.

### Lexicographical Order

A sequence **A = (A₁, ..., Aₘ)** is lexicographically smaller than a sequence **B = (B₁, ..., Bₙ)** if either of the following is true:

1. **A is shorter than B**, and the first **m** elements of both sequences are equal:

   ```text
   |A| < |B|
   ```

   and

   ```text
   (A₁, ..., Aₘ) = (B₁, ..., Bₘ)
   ```

2. There exists an index **i** such that:

   ```text
   A₁ = B₁
   A₂ = B₂
   ...
   Aᵢ₋₁ = Bᵢ₋₁
   ```

   and

   ```text
   Aᵢ < Bᵢ
   ```

Since all sequences in this problem have the same length, the second condition is the one that determines their ordering.

---

## Constraints

- All input values are integers.
- **1 ≤ N ≤ 8**
- **2 ≤ K ≤ 10**
- **1 ≤ Rᵢ ≤ 5**

---

## Input

The input is given from standard input in the following format:

```text
N K
R₁ R₂ ... Rₙ
```

---

## Output

Print all valid sequences in lexicographical order.

If there are **X** valid sequences, print them in the following format:

```text
A₁,₁ A₁,₂ ... A₁,ₙ
A₂,₁ A₂,₂ ... A₂,ₙ
⋮
Aₓ,₁ Aₓ,₂ ... Aₓ,ₙ
```

If there are no valid sequences, print nothing.

---

## Example 1

### Input

```text
3 2
2 1 3
```

### Output

```text
1 1 2
2 1 1
2 1 3
```

---

## Example 2

### Input

```text
1 2
1
```

### Output

```text
```

There are no sequences whose sum is a multiple of **2**.

---

## Example 3

### Input

```text
5 5
2 3 2 3 2
```

### Output

```text
1 1 1 1 1
1 2 2 3 2
1 3 1 3 2
1 3 2 2 2
1 3 2 3 1
2 1 2 3 2
2 2 1 3 2
2 2 2 2 2
2 2 2 3 1
2 3 1 2 2
2 3 1 3 1
2 3 2 1 2
2 3 2 2 1
```