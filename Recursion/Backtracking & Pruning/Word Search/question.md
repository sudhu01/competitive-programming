# 79. Word Search

[LeetCode](https://leetcode.com/problems/word-search/)

**Difficulty:** Medium

**Topics:** Array, String, Backtracking, Depth-First Search

---

## Problem Statement

Given an `m x n` grid of characters `board` and a string `word`, return `true` *if* `word` *exists in the grid*.

The word can be constructed from letters of sequentially adjacent cells, where adjacent cells are horizontally or vertically neighboring. The same letter cell may not be used more than once.

---

## Examples

### Example 1

![Example 1](https://assets.leetcode.com/uploads/2020/11/04/word2.jpg)

**Input:**
```text
board = [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]]
word = "ABCCED"
```

**Output:**
```text
true
```

### Example 2

![Example 2](https://assets.leetcode.com/uploads/2020/11/04/word-1.jpg)

**Input:**
```text
board = [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]]
word = "SEE"
```

**Output:**
```text
true
```

### Example 3

![Example 3](https://assets.leetcode.com/uploads/2020/10/15/word3.jpg)

**Input:**
```text
board = [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]]
word = "ABCB"
```

**Output:**
```text
false
```

---

## Constraints

- `m == board.length`
- `n = board[i].length`
- `1 <= m, n <= 6`
- `1 <= word.length <= 15`
- `board` and `word` consists of only lowercase and uppercase English letters.