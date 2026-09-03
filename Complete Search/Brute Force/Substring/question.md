# B - Substring

- **Time Limit:** 2 seconds
- **Memory Limit:** 1024 MiB
- **Score:** 200 points
- **Source:** [AtCoder - ABC177 B](https://atcoder.jp/contests/abc177/tasks/abc177_b)

## Problem Statement

You are given two strings **S** and **T**.

You may change some of the characters in **S** so that **T** becomes a substring of **S**.

Determine the **minimum number of characters** that need to be changed.

A **substring** is a consecutive subsequence of a string.

For example:

- `xxx` is a substring of `yxxxy`.
- `xxx` is **not** a substring of `xxyxx`.

---

## Constraints

- The lengths of **S** and **T** are each between **1** and **1000**, inclusive.
- The length of **T** is at most the length of **S**.
- **S** and **T** consist of lowercase English letters.

---

## Input

The input is given from standard input in the following format:

```text
S
T
```

---

## Output

Print the minimum number of characters in **S** that need to be changed.

---

## Examples

### Example 1

#### Input

```text
cabacc
abc
```

#### Output

```text
1
```

### Explanation

Changing the first character of `cab` to `a` gives:

```text
aab
```

However, the optimal matching is to change one character so that `abc` appears as a substring.

Therefore, the minimum number of changes is **1**.

---

### Example 2

#### Input

```text
codeforces
atcoder
```

#### Output

```text
6
```