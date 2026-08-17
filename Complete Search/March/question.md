# C - March

- **Time Limit:** 2 seconds
- **Memory Limit:** 256 MB
- **Score:** 300 points
- **Source:** [AtCoder - ABC089 C](https://atcoder.jp/contests/abc089/tasks/abc089_c)

## Problem Statement

There are **N** people.

The name of the **i-th** person is **Sᵢ**.

We want to choose **three people** such that all of the following conditions are satisfied:

1. The name of every chosen person begins with one of the following letters:
   - `M`
   - `A`
   - `R`
   - `C`
   - `H`
2. No two chosen people have names beginning with the same letter.

Determine the number of ways to choose three people satisfying these conditions.

The order in which the three people are chosen does **not** matter.

> **Note:** The answer may not fit into a 32-bit integer type.

---

## Constraints

- **1 ≤ N ≤ 10⁵**
- **Sᵢ** consists only of uppercase English letters.
- **1 ≤ |Sᵢ| ≤ 10**
- **Sᵢ ≠ Sⱼ** for all **i ≠ j**.

---

## Input

The input is given from standard input in the following format:

```text
N
S₁
⋮
Sₙ
```

---

## Output

Print the number of ways to choose three people satisfying the conditions.

---

## Examples

### Example 1

#### Input

```text
5
MASHIKE
RUMOI
OBIRA
HABORO
HOROKANAI
```

#### Output

```text
2
```

---

### Example 2

#### Input

```text
4
ZZ
ZZZ
Z
ZZZZZZZZZZ
```

#### Output

```text
0
```

---

### Example 3

#### Input

```text
5
CHOKUDAI
RNG
MAKOTO
AOKI
RINGO
```

#### Output

```text
7
```