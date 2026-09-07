# B - Buildings are Colorful!

- **Time Limit:** 2 seconds
- **Memory Limit:** 256 MB
- **Max Score:** 350 points
- **Source:** [AtCoder - s8pc-4 B](https://atcoder.jp/contests/s8pc-4/tasks/s8pc_4_b)

## Problem Statement

There are **N** buildings along a line.

The **i-th** building from the left:

- Has color **i**
- Has an initial height of **aᵢ** meters

Chokudai is the mayor of the city, and he loves colorful things. He wants to be able to see **at least K buildings** from the left.

You can **increase** the height of any building, but you cannot decrease its height.

Increasing a building's height by **1 meter** costs **1 yen**. Therefore, all building heights must remain integers.

### When Can a Building Be Seen?

Building **i** can be seen from the left if there is **no** building **j** to its left (`j < i`) whose height is greater than or equal to the height of building **i**.

In other words, building **i** can be seen if:

```text
height[j] < height[i]
```

for every `j < i`.

Calculate the **minimum cost** required to make at least **K** buildings visible from the left.

---

## Input

The input is given in the following format:

```text
N K
a₁ a₂ a₃ ... aₙ
```

---

## Output

Print the minimum cost needed to satisfy Chokudai's objective.

The output should end with a line break.

---

## Constraints

- **1 ≤ K ≤ N ≤ 15**
- **1 ≤ aᵢ ≤ 10⁹**

---

## Scoring

### Subtask 1 — 120 points

- **N = K**

### Subtask 2 — 90 points

- **N ≤ 5**
- **aᵢ ≤ 7**

### Subtask 3 — 140 points

- There are no additional constraints.

---

## Examples

### Example 1

#### Input

```text
5 5
3949 3774 3598 3469 3424
```

#### Output

```text
1541
```

---

### Example 2

#### Input

```text
5 3
7 4 2 6 4
```

#### Output

```text
7
```