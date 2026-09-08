# 1148. Article Views I

- **Difficulty:** Easy
- **Topics:** SQL
- **Source:** [LeetCode - 1148. Article Views I](https://leetcode.com/problems/article-views-i/)

## Problem Statement

You are given a table named `Views`.

Find all authors who have viewed **at least one of their own articles**.

An author has viewed their own article when:

```text
author_id = viewer_id
```

Return the result table sorted by `id` in **ascending order**.

Since the `Views` table may contain duplicate rows, each author's ID should appear **only once** in the result.

---

## Table: `Views`

| Column Name | Type |
|---|---|
| `article_id` | `int` |
| `author_id` | `int` |
| `viewer_id` | `int` |
| `view_date` | `date` |

### Column Details

- There is **no primary key** for this table.
- Duplicate rows may exist.
- Each row indicates that a viewer viewed an article written by an author on a particular date.
- If `author_id` and `viewer_id` are equal, they represent the **same person**.

---

## Solution

```sql
SELECT DISTINCT author_id AS id
FROM Views
WHERE author_id = viewer_id
ORDER BY id ASC;
```

### Explanation

We only need rows where the author and viewer are the same person:

```sql
WHERE author_id = viewer_id
```

Because the same author may have viewed their own article multiple times, we use `DISTINCT`:

```sql
SELECT DISTINCT author_id AS id
```

Finally, sort the resulting IDs in ascending order:

```sql
ORDER BY id ASC
```

---

## Example

### Input

`Views` table:

| article_id | author_id | viewer_id | view_date |
|---:|---:|---:|---|
| 1 | 3 | 5 | 2019-08-01 |
| 1 | 3 | 6 | 2019-08-02 |
| 2 | 7 | 7 | 2019-08-01 |
| 2 | 7 | 6 | 2019-08-02 |
| 4 | 7 | 1 | 2019-07-22 |
| 3 | 4 | 4 | 2019-07-21 |
| 3 | 4 | 4 | 2019-07-21 |

### Output

| id |
|---:|
| 4 |
| 7 |

### Explanation

- Author `7` viewed their own article → include `7`.
- Author `4` viewed their own article → include `4`.
- The duplicate row for author `4` does not create another result because of `DISTINCT`.
- Author `3` never viewed their own article → exclude `3`.