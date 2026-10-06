# C. Phoenix and Distribution

**Time limit per test:** `2 seconds`  
**Memory limit per test:** `256 megabytes`

---

## Problem Statement

Phoenix has a string `s` consisting of lowercase Latin letters. He wants to distribute all the letters of his string into `k` non-empty strings `a₁, a₂, …, aₖ` such that every letter of `s` goes to exactly one of the strings `aᵢ`.

The strings `aᵢ` do not need to be substrings of `s`. Phoenix can distribute letters of `s` and rearrange the letters within each string `aᵢ` however he wants.

For example, if `s = baba` and `k = 2`, Phoenix may distribute the letters of his string in many ways, such as:

```text
ba and ba
a and abb
ab and ab
aa and bb
```

But these ways are invalid:

```text
baa and ba
b and ba
baba and empty string
```

(`aᵢ` should be non-empty.)

Phoenix wants to distribute the letters of his string `s` into `k` strings `a₁, a₂, …, aₖ` to minimize the lexicographically maximum string among them, i.e. minimize `max(a₁, a₂, …, aₖ)`.

Help him find the optimal distribution and print the minimal possible value of `max(a₁, a₂, …, aₖ)`.

String `x` is lexicographically less than string `y` if either `x` is a prefix of `y` and `x ≠ y`, or there exists an index `i` (`1 ≤ i ≤ min(|x|, |y|)`) such that `xᵢ < yᵢ` and for every `j` (`1 ≤ j < i`), `xⱼ = yⱼ`.

Here `|x|` denotes the length of `x`.

---

## Input

The input consists of multiple test cases.

The first line contains an integer `t` (`1 ≤ t ≤ 1000`) — the number of test cases.

Each test case consists of two lines.

The first line of each test case consists of two integers `n` and `k` (`1 ≤ k ≤ n ≤ 10⁵`) — the length of string `s` and the number of non-empty strings into which Phoenix wants to distribute the letters of `s`, respectively.

The second line of each test case contains a string `s` of length `n` consisting only of lowercase Latin letters.

It is guaranteed that the sum of `n` over all test cases is `≤ 10⁵`.

---

## Output

Print `t` answers — one per test case.

The `i`-th answer should be the minimal possible value of `max(a₁, a₂, …, aₖ)` in the `i`-th test case.

---

## Example

### Input

```text id="8xj3qk"
6
4 2
baba
5 2
baacb
5 3
baacb
5 3
aaaaa
6 4
aaxxzz
7 1
phoenix
```

### Output

```text id="m2v7pd"
ab
abbc
b
aa
x
ehinopx
```

---

## Note

In the first test case, one optimal solution is to distribute `baba` into `ab` and `ab`.

In the second test case, one optimal solution is to distribute `baacb` into `abbc` and `a`.

In the third test case, one optimal solution is to distribute `baacb` into `ac`, `ab`, and `b`.

In the fourth test case, one optimal solution is to distribute `aaaaa` into `aa`, `aa`, and `a`.

In the fifth test case, one optimal solution is to distribute `aaxxzz` into `az`, `az`, `x`, and `x`.

In the sixth test case, one optimal solution is to distribute `phoenix` into `ehinopx`.