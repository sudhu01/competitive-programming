# Sum of Two Values

**[CSES](https://cses.fi/problemset/task/1640)**

---

## Problem Statement

You are given an array of `n` integers, and your task is to find two values (at distinct positions) whose sum is `x`.

---

## Input

The first input line has two integers `n` and `x`: the array size and the target sum.

The second line has `n` integers `a₁, a₂, …, aₙ`: the array values.

---

## Output

Print two integers: the positions of the values.

If there are several solutions, you may print any of them.

If there are no solutions, print **`IMPOSSIBLE`**.

---

## Constraints

* `1 ≤ n ≤ 2 · 10⁵`
* `1 ≤ x, aᵢ ≤ 10⁹`

---

## Examples

### Example 1

**Input**

```text
4 8
2 7 5 1
```

**Output**

```text
2 4
```
