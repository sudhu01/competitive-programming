# 1122 String

- **Time Limit:** 2 seconds
- **Memory Limit:** 1024 MiB
- **Score:** 150 points

## Problem Statement

A string **T** is called a **1122 string** if and only if it satisfies **all** of the following conditions:

1. The length of **T** is even.
2. For every integer **i** (`1 ≤ i ≤ |T| / 2`), the `(2i − 1)`-th and `2i`-th characters of **T** are equal.
3. Every character appears in **T** either:
   - **exactly two times**, or
   - **not at all**.

In other words, every character that appears in **T** must appear **exactly twice**.

Given a string **S** consisting of lowercase English letters, determine whether **S** is a **1122 string**.

Print **`Yes`** if it is, otherwise print **`No`**.

---

## Constraints

- **S** is a string consisting of lowercase English letters.
- **1 ≤ |S| ≤ 100**

---

## Input

The input is given from standard input in the following format:

```text
S
```

---

## Output

Print:

- `Yes` if **S** is a 1122 string.
- `No` otherwise.

---

## Sample Input 1

```text
aabbcc
```

## Sample Output 1

```text
Yes
```

### Explanation

`S = "aabbcc"` satisfies all three conditions of a **1122 string**, so the answer is:

```text
Yes
```

---

## Sample Input 2

```text
aab
```

## Sample Output 2

```text
No
```

### Explanation

The length of the string is odd, so it does not satisfy the first condition.

---

## Sample Input 3

```text
zzzzzz
```

## Sample Output 3

```text
No
```

### Explanation

The character `z` appears **six** times, not **exactly two**, so the third condition is violated.