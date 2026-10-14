# 131. Palindrome Partitioning

[LeetCode](https://leetcode.com/problems/palindrome-partitioning/)

**Difficulty:** Medium

**Topics:** String, Dynamic Programming, Backtracking

---

## Problem Statement

Given a string `s`, partition `s` such that every substring of the partition is a **palindrome**. Return *all possible palindrome partitioning of* `s`.

---

## Examples

### Example 1

**Input:**
```text
s = "aab"
```

**Output:**
```text
[["a","a","b"],["aa","b"]]
```

### Example 2

**Input:**
```text
s = "a"
```

**Output:**
```text
[["a"]]
```

---

## Constraints

- `1 <= s.length <= 16`
- `s` contains only lowercase English letters.