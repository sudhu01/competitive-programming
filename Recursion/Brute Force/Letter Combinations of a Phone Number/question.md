# 17. Letter Combinations of a Phone Number

[LeetCode](https://leetcode.com/problems/letter-combinations-of-a-phone-number/)

**Difficulty:** Medium

**Topics:** Array, String, Backtracking

---

## Problem Statement

Given a string containing digits from `2-9` inclusive, return all possible letter combinations that the number could represent. Return the answer in **any order**.

A mapping of digits to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.

![Telephone keypad](https://assets.leetcode.com/uploads/2022/03/15/1200px-telephone-keypad2svg.png)

---

## Examples

### Example 1

**Input:**
```text
digits = "23"
```

**Output:**
```text
["ad","ae","af","bd","be","bf","cd","ce","cf"]
```

### Example 2

**Input:**
```text
digits = "2"
```

**Output:**
```text
["a","b","c"]
```

---

## Constraints

- `1 <= digits.length <= 4`
- `digits[i]` is a digit in the range `['2', '9']`.