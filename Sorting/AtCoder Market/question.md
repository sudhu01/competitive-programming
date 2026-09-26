# B - AtCoder Market

**[AtCoder](https://atcoder.jp/contests/s8pc-6/tasks/s8pc_6_b)**

**Max Score:** `300` Points

---

## Problem Statement

AtCoder Market is a supermarket consisting of `1 000 000 000` squares, connected like a straight line from left to right. Let "square `i`" be the `i`-th leftmost square. In other words, square `i` and square `i+1` are connected for all integer `i` (`1 ≤ i ≤ 999 999 999`).

One day, `N` buyers came to AtCoder Market for shopping. The `i`-th buyer wants to buy two goods: one in square `A_i`, and the other in square `B_i`.

The owner of AtCoder Market, square1001, is going to install one **entrance** and one **exit**.

Entrance and exit can be installed at any square, and entrance and exit can be placed at the same square.

Then, the `i`-th buyer will do shopping in the following way:

* Start from the entrance, then visit squares `A_i`, `B_i`, and goal at the exit. They will move in the shortest route.

For all buyers, it takes exactly `1` seconds to move to an adjacent square.

What is the minimum sum of durations of shoppings, when the owner chooses the place of entrance and exit optimally?

---

## Constraints

* `1 ≤ N ≤ 30`
* `1 ≤ A_i < B_i ≤ 1 000 000 000`

---

## Subtasks / Scoring

This problem is separated several two subtasks, and you will get score of the subtask if your program prints the correct answer for all testcases for the subtask prepared.

The score for a program is the sum of score of subtasks of correct answer.

* **(195 points):** `1 ≤ A_i < B_i ≤ 100`. Also, both entrance and exit will be square either `1, 2, 3, ..., 100` in the optimal solution.
* **(105 points):** No additional constraints.

---

## Input

The input will be given from standard input, in the following format:

```text id="kj6xq7"
N
A_1 B_1
A_2 B_2
:
A_N B_N
```

---

## Output

Print the minimal sum of duration of shopping (in second), in one line.

---

## Note

In this constraints, the answer may not be included in the range of `32`-bit integer.

To use `64`-bit integers, for example in C / C++, we can use `long long` type, instead of `int`.

---

## Examples

### Example 1

**Input**

```text id="t8l5u2"
3
5 7
2 6
8 10
```

**Output**

```text id="q1m4sv"
18
```

---

### Example 2

**Input**

```text id="v0p5bs"
5
1 71
43 64
13 35
14 54
79 85
```

**Output**

```text id="h6m7a9"
334
```

---

### Example 3

**Input**

```text id="y5h9fw"
11
15004200 341668840
277786703 825590503
85505967 410375631
797368845 930277710
90107929 763195990
104844373 888031128
338351523 715240891
458782074 493862093
189601059 534714600
299073643 971113974
98291394 443377420
```

**Output**

```text id="m8q2xz"
8494550716
```
