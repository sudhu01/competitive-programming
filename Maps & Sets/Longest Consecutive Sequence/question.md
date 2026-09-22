# [128. Longest Consecutive Sequence](https://leetcode.com/problems/longest-consecutive-sequence/)

**Difficulty:** Medium

**Topics:** Hash Table, Union Find

---

## Problem Statement

Given an unsorted array of integers `nums`, return the length of the longest consecutive elements sequence.

You must write an algorithm that runs in **`O(n)`** time.

---

## Examples

### Example 1

**Input**

```text
nums = [100,4,200,1,3,2]
```

**Output**

```text
4
```

**Explanation:**

The longest consecutive elements sequence is `[1, 2, 3, 4]`. Therefore its length is `4`.

---

### Example 2

**Input**

```text
nums = [0,3,7,2,5,8,4,6,0,1]
```

**Output**

```text
9
```

---

### Example 3

**Input**

```text
nums = [1,0,1,2]
```

**Output**

```text
3
```

---

## Constraints

* `0 <= nums.length <= 10⁵`
* `-10⁹ <= nums[i] <= 10⁹`
