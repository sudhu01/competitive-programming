# C - Pyramid

- **Time Limit:** 2 seconds
- **Memory Limit:** 1024 MiB
- **Score:** 300 points
- **Source:** [AtCoder - ABC112 C](https://atcoder.jp/contests/abc112/tasks/abc112_c)

## Problem Statement

In the Ancient Kingdom of Snuke, there was a pyramid to strengthen the authority of Takahashi, the president of AtCoder Inc.

The pyramid has:

- **Center coordinates** `(CX, CY)`
- **Height** `H`

The altitude of the pyramid at coordinates `(X, Y)` is defined as:

```text
max(H - |X - CX| - |Y - CY|, 0)
```

Aoki, an explorer, conducted a survey to determine the center coordinates and height of the pyramid.

From the survey, he obtained the following information:

- `CX` and `CY` are integers between **0** and **100**, inclusive.
- `H` is an integer greater than or equal to **1**.
- He also obtained **N** pieces of information.
- The **i-th** piece of information states that the altitude of point `(xᵢ, yᵢ)` is **hᵢ**.

The information is sufficient to uniquely determine the center coordinates and height of the pyramid.

Find `CX`, `CY`, and `H`.

---

## Constraints

- **1 ≤ N ≤ 100**
- **0 ≤ xᵢ, yᵢ ≤ 100**
- **0 ≤ hᵢ ≤ 10⁹**
- All `(xᵢ, yᵢ)` are distinct.
- The center coordinates and height of the pyramid can be uniquely identified.

---

## Input

The input is given from standard input in the following format:

```text
N
x₁ y₁ h₁
x₂ y₂ h₂
⋮
xₙ yₙ hₙ
```

---

## Output

Print `CX`, `CY`, and `H` on a single line, separated by spaces.

---

## Examples

### Example 1

#### Input

```text
4
2 3 5
2 1 5
1 2 5
3 2 5
```

#### Output

```text
2 2 6
```

---

### Example 2

#### Input

```text
2
0 0 100
1 1 98
```

#### Output

```text
0 0 100
```

---

### Example 3

#### Input

```text
3
99 1 191
100 1 192
99 0 192
```

#### Output

```text
100 0 193
```