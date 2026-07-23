# Multiplication 2

- **Time Limit:** 2 seconds
- **Memory Limit:** 1024 MiB
- **Score:** 200 points

## Problem Statement

You are given **N** integers:

```text
A₁, A₂, ..., Aₙ
```

Compute the product:

```text
A₁ × A₂ × ... × Aₙ
```

However, if the result exceeds **10¹⁸**, print **`-1`** instead.

---

## Constraints

- **2 ≤ N ≤ 10⁵**
- **0 ≤ Aᵢ ≤ 10¹⁸**
- All input values are integers.

---

## Input

The input is given from standard input in the following format:

```text
N
A₁ A₂ ... Aₙ
```

---

## Output

Print:

- The value of **A₁ × A₂ × ... × Aₙ**, if it is at most **10¹⁸**.
- Otherwise, print **`-1`**.

---

## Example 1

### Input

```text
2
1000000000 1000000000
```

### Output

```text
1000000000000000000
```

---

## Example 2

### Input

```text
3
101 9901 999999000001
```

### Output

```text
-1
```

---

## Example 3

### Input

```text
31
4 1 5 9 2 6 5 3 5 8 9 7 9 3 2 3 8 4 6 2 6 4 3 3 8 3 2 7 9 5 0
```

### Output

```text
0
```