

# C - GeT AC

[AtCoder Beginner Contest 122 - Problem C](https://atcoder.jp/contests/abc122/tasks/abc122_c)

**Time Limit:** 2 sec  
**Memory Limit:** 1024 MiB

## Problem Statement

You are given a string \(S\) of length \(N\), consisting of `A`, `C`, `G` and `T`.

Answer the following \(Q\) queries:

- **Query \(i\):** You are given integers \(l_i\) and \(r_i\). Consider the substring of \(S\) starting at index \(l_i\) and ending at index \(r_i\) (both inclusive). How many times does `AC` occur as a substring in it?

### Notes

A substring of a string \(T\) is a string obtained by removing zero or more characters from the beginning and the end of \(T\).

For example, the substrings of `ATCODER` include `TCO`, `AT`, `CODER`, `ATCODER` and the empty string, but not `AC`.

## Constraints

- \(1 \leq N, Q \leq 10^5\)
- \(1 \leq l_i \leq r_i \leq N\)
- \(S\) is a string of length \(N\).
- Each character in \(S\) is `A`, `C`, `G` or `T`.

## Input

Input is given from Standard Input in the following format:

```text
N Q
S
l₁ r₁
l₂ r₂
⋮
lQ rQ
```

## Output

Print \(Q\) lines.

The \(i\)-th line should contain the answer to the \(i\)-th query.

## Sample Input 1

```text
8 3
ACACTACG
3 7
2 3
1 8
```

## Sample Output 1

```text
2
0
3
```

### Sample Explanation

- Query 1: The substring from index 3 to index 7 is `ACTAC`. In this string, `AC` occurs twice as a substring.
- Query 2: The substring from index 2 to index 3 is `CA`. In this string, `AC` occurs zero times as a substring.
- Query 3: The substring from index 1 to index 8 is `ACACTACG`. In this string, `AC` occurs three times as a substring.

