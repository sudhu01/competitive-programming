# 1683. Invalid Tweets

**Difficulty:** Easy  
**Topics:** SQL

## Problem Statement

You are given a table named `Tweets` containing tweets from a social media app.

A tweet is considered **invalid** if the number of characters in its `content` is **strictly greater than 15**.

Write a SQL query to find the IDs of all invalid tweets.

The result may be returned in **any order**.

## Table Schema

### `Tweets`

| Column Name | Type |
|---|---|
| `tweet_id` | `int` |
| `content` | `varchar` |

- `tweet_id` is the primary key.
- `content` consists of alphanumeric characters, `!`, or spaces.

## Constraints

- `tweet_id` contains unique values.
- A tweet is invalid when the length of `content` is greater than `15`.

## Input

The `Tweets` table:

```text
+----------+-----------------------------------+
| tweet_id | content                           |
+----------+-----------------------------------+
| 1        | Let us Code                       |
| 2        | More than fifteen chars are here! |
+----------+-----------------------------------+