# D - Diversity of Scores

**[AtCoder](https://atcoder.jp/contests/abc343/tasks/abc343_d)**

**Score:** `400` points

---

## Problem Statement

Takahashi is hosting a contest with `N` players numbered `1` to `N`. The players will compete for points. Currently, all players have zero points.

Takahashi's foreseeing ability lets him know how the players' scores will change. Specifically, for `i = 1, 2, …, T`, the score of player `A_i` will increase by `B_i` points at `i` seconds from now. There will be no other change in the scores.

Takahashi, who prefers diversity in scores, wants to know how many different score values will appear among the players' scores at each moment. For each `i = 1, 2, …, T`, find the number of different score values among the players' scores at `i + 0.5` seconds from now.

For example, if the players have `10`, `20`, `30`, and `20` points at some moment, there are three different score values among the players' scores at that moment.

---

## Constraints

* `1 ≤ N, T ≤ 2 × 10⁵`
* `1 ≤ A_i ≤ N`
* `1 ≤ B_i ≤ 10⁹`
* All input values are integers.

---

## Input

The input is given from Standard Input in the following format:

```text
N T
A_1 B_1
A_2 B_2
⋮
A_T B_T
```

---

## Output

Print `T` lines.

The `i`-th line (`1 ≤ i ≤ T`) should contain an integer representing the number of different score values among the players' scores at `i + 0.5` seconds from now.

---

## Examples

### Example 1

**Input**

```text
3 4
1 10
3 20
2 10
2 10
```

**Output**

```text
2
3
2
2
```

---

### Example 2

**Input**

```text
1 3
1 3
1 4
1 3
```

**Output**

```text
1
1
1
```

---

### Example 3

**Input**

```text
10 10
7 2620
9 2620
8 3375
1 3375
6 1395
5 1395
6 2923
10 3375
9 5929
5 1225
```

**Output**

```text
2
2
3
3
4
4
5
5
6
5
```
