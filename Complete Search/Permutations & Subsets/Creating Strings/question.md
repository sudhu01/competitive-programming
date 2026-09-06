# Creating Strings

- **Time Limit:** 1 second
- **Memory Limit:** 512 MB
- **Source:** [CSES - Creating Strings](https://cses.fi/problemset/task/1622)

## Problem Statement

Given a string, your task is to generate **all different strings** that can be created using its characters.

Each character from the original string must be used exactly once.

---

## Input

The only input line contains a string of length **n**.

Each character is a lowercase English letter from `a` to `z`.

---

## Output

First, print an integer **k**, representing the number of distinct strings that can be created.

Then, print **k** lines containing the strings in **alphabetical order**.

---

## Constraints

- **1 ≤ n ≤ 8**

---

## Example

### Input

```text
aabac
```

### Output

```text
20
aaabc
aaacb
aabac
aabca
aacab
aacba
abaac
abaca
abcaa
acaab
acaba
acbaa
baaac
baaca
bacaa
bcaaa
caaab
caaba
cabaa
cbaaa
```