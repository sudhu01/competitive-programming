# Apple Division

- **Time Limit:** 1 second
- **Memory Limit:** 512 MB
- **Source:** [CSES - Apple Division](https://cses.fi/problemset/task/1623)

## Problem Statement

There are **n** apples with known weights.

Your task is to divide the apples into **two groups** such that the difference between the total weights of the two groups is as small as possible.

Every apple must belong to exactly one of the two groups.

---

## Input

The first line contains a single integer:

```text
n
```

The second line contains **n** integers:

```text
p₁ p₂ ... pₙ
```

where `pᵢ` is the weight of the **i-th** apple.

---

## Output

Print one integer: the **minimum possible difference** between the total weights of the two groups.

---

## Constraints

- **1 ≤ n ≤ 20**
- **1 ≤ pᵢ ≤ 10⁹**

---

## Explanation

For the example below, one optimal division is:

**Group 1:**

```text
2, 3, 4
```

Total weight:

```text
2 + 3 + 4 = 9
```

**Group 2:**

```text
1, 7
```

Total weight:

```text
1 + 7 = 8
```

The difference is:

```text
9 - 8 = 1
```

Therefore, the minimum possible difference is **1**.

---

## Example

### Input

```text
5
3 2 7 4 1
```

### Output

```text
1
```