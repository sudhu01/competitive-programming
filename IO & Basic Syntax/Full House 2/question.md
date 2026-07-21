# Full House 2

- **Time Limit:** 2 seconds
- **Memory Limit:** 1024 MiB
- **Score:** 100 points

## Problem Statement

There are four cards with integers **A**, **B**, **C**, and **D** written on them.

Determine whether it is possible to form a **Full House** by adding **one** additional card.

A set of **five** cards is called a **Full House** if and only if the following condition is satisfied:

- There exist **two distinct integers** **x** and **y** such that:
  - Exactly **three** cards have the value **x**.
  - Exactly **two** cards have the value **y**.

Print **"Yes"** if adding one card can form a Full House; otherwise, print **"No"**.

---

## Constraints

- All input values are integers.
- **1 ≤ A, B, C, D ≤ 13**

---

## Input

The input is given from standard input in the following format:

```text
A B C D
```

---

## Output

Print:

- `Yes` if adding one card can form a Full House.
- `No` otherwise.

---

## Sample Input 1

```text
7 7 7 1
```

## Sample Output 1

```text
Yes
```

### Explanation

Adding one more card with the value **1** results in the cards:

```text
7 7 7 1 1
```

This contains:

- Three `7`s
- Two `1`s

which is a **Full House**.

---

## Sample Input 2

```text
13 12 11 10
```

## Sample Output 2

```text
No
```

### Explanation

No matter which card is added, the five cards cannot be arranged into a Full House.