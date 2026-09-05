# C - Travel

- **Time Limit:** 2 seconds
- **Memory Limit:** 1024 MiB
- **Score:** 300 points
- **Source:** [AtCoder - ABC183 C](https://atcoder.jp/contests/abc183/tasks/abc183_c)

## Problem Statement

There are **N** cities.

The time it takes to travel from City **i** to City **j** is **Tᵢ,ⱼ**.

Consider all paths that:

1. Start at **City 1**.
2. Visit every other city **exactly once**.
3. Return to **City 1**.

Determine how many such paths have a total travel time of exactly **K**.

---

## Constraints

- **2 ≤ N ≤ 8**
- If **i ≠ j**, then **1 ≤ Tᵢ,ⱼ ≤ 10⁸**.
- **Tᵢ,ᵢ = 0**
- **Tᵢ,ⱼ = Tⱼ,ᵢ**
- **1 ≤ K ≤ 10⁹**
- All input values are integers.

---

## Input

The input is given from standard input in the following format:

```text
N K
T₁,₁ T₁,₂ ... T₁,ₙ
⋮
Tₙ,₁ Tₙ,₂ ... Tₙ,ₙ
```

---

## Output

Print the number of paths whose total travel time is exactly **K**.

---

## Examples

### Example 1

#### Input

```text
4 330
0 1 10 100
1 0 20 200
10 20 0 300
100 200 300 0
```

#### Output

```text
2
```

---

### Example 2

#### Input

```text
5 5
0 1 1 1 1
1 0 1 1 1
1 1 0 1 1
1 1 1 0 1
1 1 1 1 0
```

#### Output

```text
24
```