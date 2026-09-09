# D - Make 2-Regular Graph

**[AtCoder](https://atcoder.jp/contests/abc412/tasks/abc412_d)**

**Score:** `425` points

---

## Problem Statement

There is a simple undirected graph `G` with `N` vertices and `M` edges. The vertices are numbered `1, 2, …, N`, and the `i`-th edge is an undirected edge connecting vertices `A_i` and `B_i`.

You can repeat the following two operations in any order and any number of times:

* Add one undirected edge to `G`
* Remove one undirected edge from `G`

Find the minimum number of operations to make `G` a simple undirected graph where all vertices have degree `2`.

### What is a simple undirected graph?

A simple undirected graph refers to an undirected graph that has no self-loops and no multi-edges.

---

## Constraints

* `3 ≤ N ≤ 8`
* `0 ≤ M ≤ N(N−1)/2`
* The graph `G` given in the input is a simple undirected graph.
* All input values are integers.

---

## Input

The input is given from Standard Input in the following format:

```text
N M
A_1 B_1
⋮
A_M B_M
```

---

## Output

Output the answer.

---

## Examples

### Example 1

**Input**

```text
5 4
1 2
1 5
2 4
4 5
```

**Output**

```text
3
```

---

### Example 2

**Input**

```text
3 0
```

**Output**

```text
3
```

---

### Example 3

**Input**

```text
6 8
1 4
1 5
2 3
2 6
3 4
3 6
4 5
4 6
```

**Output**

```text
2
```

---

### Example 4

**Input**

```text
8 21
1 4
5 7
8 4
3 4
2 5
8 1
5 1
2 8
2 1
2 4
3 1
6 7
5 8
2 7
6 8
5 4
3 8
7 3
7 8
5 3
7 4
```

**Output**

```text
13
```
