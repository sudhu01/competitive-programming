# C. The Smallest String Concatenation

**Time limit per test:** `3 seconds`  
**Memory limit per test:** `256 megabytes`

---

## Problem Statement

You're given a list of `n` strings `a₁, a₂, ..., aₙ`. You'd like to concatenate them together in some order such that the resulting string would be lexicographically smallest.

Given the list of strings, output the lexicographically smallest concatenation.

---

## Input

The first line contains integer `n` — the number of strings (`1 ≤ n ≤ 5 · 10⁴`).

Each of the next `n` lines contains one string `aᵢ` (`1 ≤ |aᵢ| ≤ 50`) consisting of only lowercase English letters.

The sum of string lengths will not exceed `5 · 10⁴`.

---

## Output

Print the only string `a` — the lexicographically smallest string concatenation.

---

## Examples

### Example 1

**Input**

```text id="p9m2la"
4
abba
abacaba
bcd
er
```

**Output**

```text id="q3v7nx"
abacabaabbabcder
```

---

### Example 2

**Input**

```text id="h5k1rt"
5
x
xx
xxa
xxaa
xxaaa
```

**Output**

```text id="w8c4py"
xxaaaxxaaxxaxxx
```

---

### Example 3

**Input**

```text id="f6j2mz"
3
c
cb
cba
```

**Output**

```text id="a7n9ks"
cbacbc
```