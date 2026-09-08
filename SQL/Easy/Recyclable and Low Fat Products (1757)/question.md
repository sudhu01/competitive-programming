# 1757. Recyclable and Low Fat Products

- **Difficulty:** Easy
- **Topics:** SQL
- **Source:** [LeetCode - 1757. Recyclable and Low Fat Products](https://leetcode.com/problems/recyclable-and-low-fat-products/)

## Problem Statement

You are given a table named `Products`.

Write a SQL query to find the IDs of products that are **both**:

- Low fat (`low_fats = 'Y'`)
- Recyclable (`recyclable = 'Y'`)

Return the result table in **any order**.

---

## Table: `Products`

| Column Name | Type |
|---|---|
| `product_id` | `int` |
| `low_fats` | `enum` |
| `recyclable` | `enum` |

### Column Details

- `product_id` is the **primary key** and uniquely identifies each product.
- `low_fats` is an ENUM containing `'Y'` or `'N'`:
  - `'Y'` means the product is low fat.
  - `'N'` means the product is not low fat.
- `recyclable` is an ENUM containing `'Y'` or `'N'`:
  - `'Y'` means the product is recyclable.
  - `'N'` means the product is not recyclable.

---

## Solution

```sql
SELECT product_id
FROM Products
WHERE low_fats = 'Y'
  AND recyclable = 'Y';
```

---

## Example

### Input

`Products` table:

| product_id | low_fats | recyclable |
|---:|:---:|:---:|
| 0 | Y | N |
| 1 | Y | Y |
| 2 | N | Y |
| 3 | Y | Y |
| 4 | N | N |

### Output

| product_id |
|---:|
| 1 |
| 3 |

### Explanation

Only products **1** and **3** satisfy both conditions:

```text
low_fats = 'Y'
recyclable = 'Y'
```