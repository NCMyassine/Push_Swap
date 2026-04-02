# Push_Swap
*This project has been created as part of the 42 curriculum by <yabouzel>.*

# Push Swap

## Description

Push Swap is an algorithmic project focused on sorting a stack of integers using a limited set of operations. The goal is to sort the data with the **minimum number of moves**, emphasizing efficiency and optimization rather than brute force.

The program receives a list of integers as arguments and outputs a sequence of instructions that sorts the numbers in ascending order. These instructions manipulate two stacks (`A` and `B`) using predefined operations such as push, swap, rotate, and reverse rotate.

This project is designed to strengthen understanding of:

* Data structures (linked lists)
* Algorithm optimization
* Time complexity
* Memory management in C

---

## Instructions

### Compilation

```bash
make
```

### Execution

```bash
./push_swap 3 2 1 6 5 8
```

The program outputs the sequence of operations required to sort the input.

---

## Allowed Operations

### Swap

* `sa` → swap the first two elements of stack A
* `sb` → swap the first two elements of stack B
* `ss` → `sa` and `sb` at the same time

### Push

* `pa` → take the first element of B and put it on A
* `pb` → take the first element of A and put it on B

### Rotate

* `ra` → shift all elements of A up by one (first becomes last)
* `rb` → shift all elements of B up by one
* `rr` → `ra` and `rb` at the same time

### Reverse Rotate

* `rra` → shift all elements of A down by one (last becomes first)
* `rrb` → shift all elements of B down by one
* `rrr` → `rra` and `rrb` at the same time

---

## Features

* Efficient sorting for both small and large datasets
* Stack implementation using linked lists
* Optimized move generation to minimize operations
* Robust error handling (invalid input, duplicates, overflow)
* No memory leaks

---

## Performance Benchmarks

* **100 numbers** → ~1084 operations
* **500 numbers** → ~6000 operations

These results fall within the expected efficiency range for optimized solutions using indexing and radix-based strategies.

---

## Time Complexity

The project focuses more on **operation count optimization** than classical time complexity, but both are related.

### Small Inputs

Custom sorting strategies (hardcoded or semi-optimized):

* Time complexity: ~O(n²) in worst cases
* Operation count is minimized manually

### Large Inputs

Typically solved using **Radix Sort (binary-based)**:

* Time complexity: **O(n × k)**

  * `n` = number of elements
  * `k` = number of bits (max ~32 for integers, usually less after indexing)

Since `k` is constant relative to input size:
→ Effective complexity becomes **O(n)**

### Key Insight

Even though radix sort is linear, the real challenge is:

* Reducing unnecessary operations
* Managing stack movements efficiently

---

## Technical Choices

* **Linked Lists** were used for flexible memory management and efficient node manipulation
* **Indexing** simplifies comparisons and avoids dealing with raw integer ranges
* **Bitwise operations** enable efficient radix sorting
* Focus on minimizing instruction count rather than just execution speed

---

## Resources

### Documentation & Learning

* 42 Push Swap subject
* C standard library documentation
* Sorting algorithm references (Radix Sort, Quick Sort basics)
* Memory management and linked list tutorials

---

### AI Usage

AI tools were used for:

* Understanding low-level concepts (pointers, memory layout, linked lists)
* Debugging segmentation faults and logical errors
* Clarifying algorithm design and optimization strategies

AI was used strictly as a **learning and guidance tool**, not for blindly generating solutions.