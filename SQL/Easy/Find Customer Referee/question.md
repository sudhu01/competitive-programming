# 584. Find Customer Referee

- **Difficulty:** Easy
- **Topics:** SQL
- **Source:** [LeetCode - 584. Find Customer Referee](https://leetcode.com/problems/find-customer-referee/)

## Problem Statement

You are given a table named `Customer`.

Find the names of customers who satisfy **either** of the following conditions:

1. They were **referred by a customer whose `id` is not 2**.
2. They were **not referred by any customer** (`referee_id` is `NULL`).

Return the result table in **any order**.

---

## Table: `Customer`

| Column Name | Type |
|---|---|
| `id` | `int` |
| `name` | `varchar` |
| `referee_id` | `int` |

### Column Details

- `id` is the **primary key** of the table.
- Each row represents a customer, their name, and the ID of the customer who referred them.
- `referee_id` may be `NULL` if the customer was not referred by anyone.

---

## Solution

```sql
SELECT name
FROM Customer
WHERE referee_id != 2
   OR referee_id IS NULL;
```

### Why `IS NULL` is Needed

In SQL, `NULL` cannot be compared using normal operators such as `=` or `!=`.

For example:

```sql
referee_id != 2
```

does **not** include rows where `referee_id` is `NULL`.

Therefore, we explicitly include customers with no referee:

```sql
OR referee_id IS NULL
```

---

## Example

### Input

`Customer` table:

| id | name | referee_id |
|---:|---|---:|
| 1 | Will | NULL |
| 2 | Jane | NULL |
| 3 | Alex | 2 |
| 4 | Bill | NULL |
| 5 | Zack | 1 |
| 6 | Mark | 2 |

### Output

| name |
|---|
| Will |
| Jane |
| Bill |
| Zack |

### Explanation

- **Will** → no referee → included
- **Jane** → no referee → included
- **Alex** → referred by customer `2` → excluded
- **Bill** → no referee → included
- **Zack** → referred by customer `1` → included
- **Mark** → referred by customer `2` → excluded