# C - Switches

- **Time Limit:** 2 seconds
- **Memory Limit:** 1024 MiB
- **Score:** 300 points
- **Source:** [AtCoder - ABC128 C](https://atcoder.jp/contests/abc128/tasks/abc128_c)

## Problem Statement

We have **N** switches, each of which can be either **on** or **off**, and **M** bulbs.

The switches are numbered from **1** to **N**, and the bulbs are numbered from **1** to **M**.

Bulb **i** is connected to **kᵢ** switches:

```text
sᵢ₁, sᵢ₂, ..., sᵢₖᵢ
```

A bulb is **lit** if the number of connected switches that are currently **on** is congruent to **pᵢ modulo 2**.

Determine the number of combinations of **on/off states** of the switches that make **all M bulbs light up**.

---

## Constraints

- **1 ≤ N, M ≤ 10**
- **1 ≤ kᵢ ≤ N**
- **1 ≤ sᵢⱼ ≤ N**
- `sᵢₐ ≠ sᵢᵦ` for `a ≠ b`
- **pᵢ** is either `0` or `1`.
- All input values are integers.

---

## Input

The input is given from standard input in the following format:

```text
N M
k₁ s₁₁ s₁₂ ... s₁ₖ₁
⋮
kₘ sₘ₁ sₘ₂ ... sₘₖₘ
p₁ p₂ ... pₘ
```

---

## Output

Print the number of combinations of **on/off states** of the switches that make all the bulbs light up.

---

## Examples

### Example 1

#### Input

```text
2 2
2 1 2
1 2
0 1
```

#### Output

```text
1
```

---

### Example 2

#### Input

```text
2 3
2 1 2
1 1
1 2
0 0 1
```

#### Output

```text
0
```

---

### Example 3

#### Input

```text
5 2
3 1 2 5
2 2 3
1 0
```

#### Output

```text
8
```