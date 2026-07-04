# Wiggle Sort Algorithm (Iterative vs. Recursive)
> A comprehensive C implementation and complexity analysis of the Wiggle Sort algorithm, demonstrating both iterative (loop-based) and recursive approaches to restructure arrays into a wave-like pattern ($i_1 < i_2 > i_3 < i_4 > i_5$).

![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)
![Algorithms](https://img.shields.io/badge/Algorithms-Analysis-orange?style=for-the-badge)
![Data Structures](https://img.shields.io/badge/Data_Structures-Validation-blue?style=for-the-badge)


## Table of Contents
* [About the Algorithm](#-about-the-algorithm)
* [Implementations](#-implementations)
* [Complexity Analysis](#-complexity-analysis)
* [Key Features](#-key-features)
* [Getting Started](#-getting-started)

## About the Algorithm
**Wiggle Sort** sorts an array into a specific wave pattern where every even-indexed element is smaller than or equal to its adjacent odd-indexed elements ($array[i] < array[i+1]$ for even $i$, and $array[i] > array[i+1]$ for odd $i$). 

This repository provides two optimized solutions to achieve this in linear time, avoiding full sorting overhead.

## Implementations

### 1. Iterative Approach (Non-Recursive)
Uses a single loop to parse the array linearly ($O(n)$ time complexity), swapping adjacent elements on-the-fly if they break the conditional wiggle rules.
* Strict input constraints validation (Array length bounds: 1 to 520, Element value bounds: 0 to 5000).

### 2. Recursive Approach
Achieves the same wave pattern by recursively traversing the array index by index, shifting execution bounds until the base case ($index \ge arraySize - 1$) is reached.

---

## Complexity Analysis

The system architecture and resource behaviors map out as follows:

| Approach | Time Complexity | Space Complexity | Risk Factors / Mechanics |
| :--- | :--- | :--- | :--- |
| **Iterative (Loop)** | $O(n)$ | $O(1)$ | High performance, uses a single temporary swapping variable. |
| **Recursive** | $O(n)$ | $O(n)$ | Consumes Call Stack memory frames; potential stack overflow risk for large inputs. |

### Mathematical Verification:
* **Iterative:** The main loop executes exactly $n-1$ times. According to the summation law:
  $$\sum_{i=l}^{u} 1 = u - l + 1 \implies \sum_{i=1}^{n-1} 1 = n - 1 \implies O(n)$$
* **Recursive Recurrence Relation:**
  $$T(n) = T(n-1) + O(1)$$
  $$T(n) = T(n-2) + 2 \cdot O(1) \dots \implies T(n) = O(n)$$

## Key Features
* **Optimized Conditional Checks:** Uses single-line compound logical gates to handle swaps cleanly.
* **Memory Management:** Implements dynamic allocation using `malloc()` with safe pointer deallocation (`free()`).
* **Theoretical Validation:** Includes detailed step-by-step Big-O pseudocode analysis matrices.


## Getting Started

### Compilation
Compile any of the standard C source files (`iterative.c` or `recursive.c`) using GCC:
```bash
gcc main.c -o wigglesort
