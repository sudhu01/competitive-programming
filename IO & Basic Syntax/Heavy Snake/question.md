# Heavy Snake

- **Time Limit:** 2 seconds
- **Memory Limit:** 1024 MiB
- **Score:** 200 points

## Problem Statement

There are **N** snakes.

Initially, the **i-th** snake has:

- Thickness **Tᵢ**
- Length **Lᵢ**

The **weight** of a snake is defined as:

```text
weight = thickness × length
```

For every integer **k** such that **1 ≤ k ≤ D**, every snake's length increases by **k**.

That is, the new length of the **i-th** snake becomes:

```text
Lᵢ + k
```

For each value of **k**, determine the weight of the **heaviest** snake.

---

## Constraints

- **1 ≤ N, D ≤ 100**
- **1 ≤ Tᵢ, Lᵢ ≤ 100**
- All input values are integers.

---

## Input

The input is given from standard input in the following format:

```text
N D
T₁ L₁
T₂ L₂
⋮
Tₙ Lₙ
```

---

## Output

Print **D** lines.

The **k-th** line should contain the weight of the heaviest snake after every snake's length has increased by **k**.

---

## Example 1

### Input

```text
4 3
3 3
5 1
2 4
1 10
```

### Output

```text
12
15
20
```

---

## Example 2

### Input

```text
1 4
100 100
```

### Output

```text
10100
10200
10300
10400
```