# Present from Lena

## Problem Statement

Vasya's birthday is approaching, and Lena decided to sew a patterned handkerchief as a present.

The pattern consists of the digits from **0** to **n**, arranged in the shape of a **rhombus**.

The largest digit, **n**, is placed at the center. As you move toward the edges of the rhombus, the digits decrease by one.

For example, when **n = 5**, the pattern looks like:

```text
0
        0 1 0
      0 1 2 1 0
    0 1 2 3 2 1 0
  0 1 2 3 4 3 2 1 0
0 1 2 3 4 5 4 3 2 1 0
  0 1 2 3 4 3 2 1 0
    0 1 2 3 2 1 0
      0 1 2 1 0
        0 1 0
          0
```

Your task is to print the handkerchief pattern for the given value of **n**.

---

## Input

The first line contains a single integer:

```text
n
```

---

## Constraints

- **2 ≤ n ≤ 9**

---

## Output

Print the rhombus pattern.

The output must satisfy the following formatting rules:

- Print the exact number of leading spaces before the first digit on each line.
- Every two adjacent digits on the same line must be separated by **exactly one space**.
- Do **not** print any trailing spaces after the last digit of a line.

---

## Example 1

### Input

```text
2
```

### Output

```text
0
  0 1 0
0 1 2 1 0
  0 1 0
    0
```

---

## Example 2

### Input

```text
3
```

### Output

```text
0
    0 1 0
  0 1 2 1 0
0 1 2 3 2 1 0
  0 1 2 1 0
    0 1 0
      0
```