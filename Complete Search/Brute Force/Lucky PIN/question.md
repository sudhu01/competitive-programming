# D - Lucky PIN

- **Time Limit:** 2 seconds
- **Memory Limit:** 1024 MiB
- **Score:** 400 points
- **Source:** [AtCoder - Sumitomo Mitsui Trust Bank Programming Contest 2019 D](https://atcoder.jp/contests/sumitrust2019/tasks/sumitb2019_d)

## Problem Statement

AtCoder Inc. has decided to lock the door of its office with a **3-digit PIN code**.

The company has an **N-digit** lucky number **S**.

Takahashi, the president, will erase **N − 3** digits from **S** and concatenate the remaining **3 digits**, without changing their order, to create the PIN code.

Determine how many **different PIN codes** can be created in this way.

Both the lucky number and the PIN code **may begin with `0`**.

---

## Constraints

- **4 ≤ N ≤ 30,000**
- **S** is a string of length **N** consisting only of digits.

---

## Input

The input is given from standard input in the following format:

```text
N
S
```

---

## Output

Print the number of different PIN codes that Takahashi can create.

---

## Examples

### Example 1

#### Input

```text
4
0224
```

#### Output

```text
3
```

---

### Example 2

#### Input

```text
6
123123
```

#### Output

```text
17
```

---

### Example 3

#### Input

```text
19
3141592653589793238
```

#### Output

```text
329
```