

# D - Water Heater

[AtCoder Beginner Contest 183 - Problem D](https://atcoder.jp/contests/abc183/tasks/abc183_d)

**Time Limit:** 2 sec  
**Memory Limit:** 1024 MiB

## Problem Statement

We have a water heater, which supplies \(W\) liters of hot water per minute.

There are \(N\) people. The \(i\)-th person plans to use \(P_i\) liters of hot water per minute boiled by the heater from time \(S_i\) to time \(T_i\) (excluding time \(T_i\) exactly).

As hot water gets cold fast, it cannot be stored.

Is it possible to supply hot water to the people according to their plans?

## Constraints

- \(1 \leq N \leq 2 \times 10^5\)
- \(0 \leq S_i < T_i \leq 2 \times 10^5\)
- \(1 \leq P_i \leq 10^9\)
- \(1 \leq W \leq 10^9\)
- All values in the input are integers.

## Input

Input is given from Standard Input in the following format:

```text
N W
S₁ T₁ P₁
S₂ T₂ P₂
⋮
Sₙ Tₙ Pₙ
```

## Output

If it is possible to supply hot water to the people according to their plans, print `Yes`; otherwise, print `No`.

## Examples

### Sample Input 1

```text
4 10
1 3 5
2 4 4
3 10 6
2 4 1
```

### Sample Output 1

```text
No
```

**Explanation:**

Between time 2 and time 3, the 2nd, 3rd, and 4th persons plan to use 4, 6, and 1 liters of hot water per minute, for a total of 11 liters per minute.

The water heater can only supply 10 liters of hot water per minute, which is not enough.

### Sample Input 2

```text
4 10
1 3 5
2 4 4
3 10 6
2 3 1
```

### Sample Output 2

```text
Yes
```

### Sample Input 3

```text
6 1000000000
0 200000 999999999
2 20 1
20 200 1
200 2000 1
2000 20000 1
20000 200000 1
```

### Sample Output 3

```text
Yes
```

