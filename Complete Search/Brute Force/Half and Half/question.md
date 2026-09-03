# C - Half and Half

- **Time Limit:** 2 seconds
- **Memory Limit:** 256 MB
- **Score:** 300 points
- **Source:** [AtCoder - ABC095 C](https://atcoder.jp/contests/abc095/tasks/arc096_a)

## Problem Statement

"Pizza At", a fast food chain, offers three kinds of pizza:

- **A-pizza**
- **B-pizza**
- **AB-pizza**

A-pizza and B-pizza are completely different pizzas.

An **AB-pizza** consists of **one half of an A-pizza and one half of a B-pizza** combined together.

The prices are:

- A-pizza: **A** yen
- B-pizza: **B** yen
- AB-pizza: **C** yen

Nakahashi needs to prepare **X A-pizzas** and **Y B-pizzas** for a party.

He can obtain these pizzas in two ways:

1. Directly buy A-pizzas and B-pizzas.
2. Buy two AB-pizzas and rearrange them into one A-pizza and one B-pizza.

It is allowed to have more pizzas than necessary.

Determine the **minimum amount of money** needed to prepare the required pizzas.

---

## Constraints

- **1 ≤ A, B, C ≤ 5000**
- **1 ≤ X, Y ≤ 10⁵**
- All input values are integers.

---

## Input

The input is given from standard input in the following format:

```text
A B C X Y
```

---

## Output

Print the minimum amount of money required to prepare **X A-pizzas** and **Y B-pizzas**.

---

## Examples

### Example 1

#### Input

```text
1500 2000 1600 3 2
```

#### Output

```text
7900
```

---

### Example 2

#### Input

```text
1500 2000 1900 3 2
```

#### Output

```text
8500
```

---

### Example 3

#### Input

```text
1500 2000 500 90000 100000
```

#### Output

```text
100000000
```