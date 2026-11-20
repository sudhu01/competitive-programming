

# C - Not All Covered

[AtCoder Beginner Contest 289 - Problem C](https://atcoder.jp/contests/abc289/tasks/abc289_c)

**Time Limit:** 2 sec  
**Memory Limit:** 1024 MiB

## Problem Statement

In the AtCoder Kingdom, there are \(N\) castle walls numbered from \(1\) through \(N\). There are also \(M\) turrets.

Turret \(i\) guards castle walls numbered from \(L_i\) through \(R_i\), inclusive.

When a turret is destroyed, the castle walls that were guarded by that turret are no longer guarded by that turret.

What is the minimum number of turrets that need to be destroyed so that at least one castle wall is not guarded by any turret?

## Constraints

- \(1 \leq N \leq 2 \times 10^5\)
- \(1 \leq M \leq 2 \times 10^5\)
- \(1 \leq L_i \leq R_i \leq N\)
- All input values are integers.

## Input

The input is given from Standard Input in the following format:

```text
N M
L₁ R₁
L₂ R₂
⋮
Lₘ Rₘ
```

## Output

Output the minimum number of turrets that need to be destroyed so that at least one castle wall is not guarded by any turret.

## Examples

### Sample Input 1

```text
10 4
1 6
4 5
5 10
7 10
```

### Sample Output 1

```text
1
```

**Explanation:**

If turret 2 is destroyed, no turret guards castle wall 4.

Also, if no turrets are destroyed, all castle walls are guarded by some turret. Therefore, output `1`.

### Sample Input 2

```text
5 2
1 2
3 4
```

### Sample Output 2

```text
0
```

**Explanation:**

Since no turret guards castle wall 5, there already exists a castle wall not guarded by any turret without destroying any turrets. Therefore, output `0`.

### Sample Input 3

```text
5 10
2 5
1 5
1 2
2 4
2 2
5 5
2 4
1 2
2 2
2 3
```

### Sample Output 3

```text
3
```

