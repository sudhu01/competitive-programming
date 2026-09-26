# C - Medicine

**[AtCoder](https://atcoder.jp/contests/abc309/tasks/abc309_c)**

**Score:** `350` points

---

## Problem Statement

Snuke the doctor prescribed `N` kinds of medicine for Takahashi. For the next `a_i` days (including the day of the prescription), he has to take `b_i` pills of the `i`-th medicine. He does not have to take any other medicine.

Let the day of the prescription be day `1`. On or after day `1`, when is the first day on which he has to take `K` pills or less?

---

## Constraints

* `1 ≤ N ≤ 3 × 10⁵`
* `0 ≤ K ≤ 10⁹`
* `1 ≤ a_i, b_i ≤ 10⁹`
* All input values are integers.

---

## Input

The input is given from Standard Input in the following format:

```text id="w7m0g2"
N K
a_1 b_1
⋮
a_N b_N
```

---

## Output

If Takahashi has to take `K` pills or less on day `X` for the first time on or after day `1`, print `X`.

---

## Examples

### Example 1

**Input**

```text id="f8v3kq"
4 8
6 3
2 5
1 9
4 2
```

**Output**

```text id="c4n8za"
3
```

---

### Example 2

**Input**

```text id="e2q5rm"
4 100
6 3
2 5
1 9
4 2
```

**Output**

```text id="j6t1px"
1
```

---

### Example 3

**Input**

```text id="n9w4ys"
15 158260522
877914575 2436426
24979445 61648772
623690081 33933447
476190629 62703497
211047202 71407775
628894325 31963982
822804784 50968417
430302156 82631932
161735902 80895728
923078537 7723857
189330739 10286918
802329211 4539679
303238506 17063340
492686568 73361868
125660016 50287940
```

**Output**

```text id="h3k7vd"
492686569
```
