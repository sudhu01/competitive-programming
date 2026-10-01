# [56. Merge Intervals](https://leetcode.com/problems/merge-intervals/)

**Difficulty:** Medium

**Topics:** Array, Sorting

---

## Problem Statement

Given an array of `intervals` where `intervals[i] = [start_i, end_i]`, merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.

---

## Examples

### Example 1

**Input**

```text
intervals = [[1,3],[2,6],[8,10],[15,18]]
```

**Output**

```text
[[1,6],[8,10],[15,18]]
```

**Explanation:**

Since intervals `[1,3]` and `[2,6]` overlap, merge them into `[1,6]`.

---

### Example 2

**Input**

```text
intervals = [[1,4],[4,5]]
```

**Output**

```text
[[1,5]]
```

**Explanation:**

Intervals `[1,4]` and `[4,5]` are considered overlapping.

---

### Example 3

**Input**

```text
intervals = [[4,7],[1,4]]
```

**Output**

```text
[[1,7]]
```

**Explanation:**

Intervals `[1,4]` and `[4,7]` are considered overlapping.

---

## Constraints

* `1 <= intervals.length <= 10⁴`
* `intervals[i].length == 2`
* `0 <= start_i <= end_i <= 10⁴`
