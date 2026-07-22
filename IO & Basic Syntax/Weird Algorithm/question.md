# Weird Algorithm

- **Time Limit:** 1.00 second
- **Memory Limit:** 512 MB

## Problem Statement

Consider the following algorithm for a positive integer **n**:

- If **n** is even, divide it by **2**.
- If **n** is odd, multiply it by **3** and add **1**.

Repeat this process until **n** becomes **1**.

For example, when **n = 3**, the sequence is:

```text
3 → 10 → 5 → 16 → 8 → 4 → 2 → 1
```

Your task is to simulate the execution of this algorithm for a given value of **n**.

---

## Input

The only input line contains a single integer:

```text
n
```

---

## Output

Print all values of **n** during the execution of the algorithm, separated by spaces.

---

## Constraints

- **1 ≤ n ≤ 10^6**

---

## Example

### Input

```text
3
```

### Output

```text
3 10 5 16 8 4 2 1
```