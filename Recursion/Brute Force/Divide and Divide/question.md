# C - Divide and Divide

**[AtCoder](https://atcoder.jp/contests/abc340/tasks/abc340_c)**

**Time Limit:** 2 sec  
**Memory Limit:** 1024 MiB  
**Score:** 300 points

---

## Problem Statement

There is a single integer `N` written on a blackboard.

Takahashi will repeat the following series of operations until all integers not less than `2` are removed from the blackboard:

- Choose one integer `x` not less than `2` written on the blackboard.
- Erase one occurrence of `x` from the blackboard. Then, write two new integers `⌊x/2⌋` and `⌈x/2⌉` on the blackboard.
- Takahashi must pay `x` yen to perform this series of operations.

Here, `⌊a⌋` denotes the largest integer not greater than `a`, and `⌈a⌉` denotes the smallest integer not less than `a`.

What is the total amount of money Takahashi will have paid when no more operations can be performed?

It can be proved that the total amount he will pay is constant regardless of the order in which the operations are performed.

---

## Constraints

- `2 <= N <= 10^17`

---

## Input

The input is given from Standard Input in the following format:

```text
N
```

## Output

Print the total amount of money Takahashi will have paid, in yen.

---

## Examples

### Example 1

**Input:**
```text
3
```

**Output:**
```text
5
```

**Explanation:**

Here is an example of how Takahashi performs the operations:

- Initially, there is one `3` written on the blackboard.
- He chooses `3`. He pays `3` yen, erases one `3` from the blackboard, and writes `⌊3/2⌋ = 1` and `⌈3/2⌉ = 2` on the blackboard.
- There is one `2` and one `1` written on the blackboard.
- He chooses `2`. He pays `2` yen, erases one `2` from the blackboard, and writes `⌊2/2⌋ = 1` and `⌈2/2⌉ = 1` on the blackboard.
- There are three `1`s written on the blackboard.
- Since all integers not less than `2` have been removed from the blackboard, the process is finished.

Takahashi has paid a total of `3 + 2 = 5` yen for the entire process, so print `5`.

### Example 2

**Input:**
```text
340
```

**Output:**
```text
2888
```