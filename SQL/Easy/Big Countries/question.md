# 595. Big Countries

- **Difficulty:** Easy
- **Topics:** SQL
- **Source:** [LeetCode - 595. Big Countries](https://leetcode.com/problems/big-countries/)

## Problem Statement

You are given a table named `World` containing information about countries.

A country is considered **big** if it satisfies **at least one** of the following conditions:

- Its area is at least **3,000,000 km²**.
- Its population is at least **25,000,000**.

Write a SQL query to find the **name**, **population**, and **area** of all big countries.

Return the result table in **any order**.

---

## Table: `World`

| Column Name | Type |
|---|---|
| `name` | `varchar` |
| `continent` | `varchar` |
| `area` | `int` |
| `population` | `int` |
| `gdp` | `bigint` |

### Column Details

- `name` is the **primary key** and uniquely identifies each country.
- `continent` is the continent to which the country belongs.
- `area` is the country's area in square kilometers.
- `population` is the country's population.
- `gdp` is the country's GDP value.

---

## Solution

```sql
SELECT name, population, area
FROM World
WHERE area >= 3000000
   OR population >= 25000000;
```

### Explanation

A country is **big** if **either** its area or population meets the required threshold.

We therefore use `OR`:

```sql
area >= 3000000
OR population >= 25000000
```

Only the required columns are selected:

```sql
name, population, area
```

---

## Example

### Input

`World` table:

| name | continent | area | population | gdp |
|---|---|---:|---:|---:|
| Afghanistan | Asia | 652230 | 25500100 | 20343000000 |
| Albania | Europe | 28748 | 2831741 | 12960000000 |
| Algeria | Africa | 2381741 | 37100000 | 188681000000 |
| Andorra | Europe | 468 | 78115 | 3712000000 |
| Angola | Africa | 1246700 | 20609294 | 100990000000 |

### Output

| name | population | area |
|---|---:|---:|
| Afghanistan | 25500100 | 652230 |
| Algeria | 37100000 | 2381741 |

### Explanation

- **Afghanistan** → population is at least `25,000,000` → **Big**
- **Albania** → neither condition is satisfied → Not big
- **Algeria** → population is at least `25,000,000` → **Big**
- **Andorra** → neither condition is satisfied → Not big
- **Angola** → neither condition is satisfied → Not big