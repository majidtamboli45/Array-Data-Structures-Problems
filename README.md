# 📊 Array Data Structure

![DSA](https://img.shields.io/badge/Data%20Structure-Array-blue)
![Language](https://img.shields.io/badge/Language-C++-orange)
![Difficulty](https://img.shields.io/badge/Level-Beginner-green)

---

## 📖 Table of Contents

* [Introduction](#-introduction)
* [Basic Operations](#-basic-operations-on-arrays)
* [Array Representation](#-array-representation)
* [C++ Implementation](#-c-implementation)
* [Time Complexity](#-time-complexity)
* [Applications of Arrays](#-applications-of-arrays)
* [Advantages](#-advantages-of-arrays)
* [Limitations](#-limitations)
* [Example Problems](#-example-problems-using-arrays)
* [Author](#-author)

---

# 📌 Introduction

An **Array** is a linear data structure used to store **multiple elements of the same data type** in **contiguous memory locations**.

Each element in an array is identified by an **index**.

Example:

```text
[10, 20, 30, 40, 50]
```

Here:

* `10` → index 0
* `20` → index 1
* `30` → index 2

Arrays allow **fast access to elements using indexing**.

---

# 🧱 Basic Operations on Arrays

| Operation | Description                           |
| --------- | ------------------------------------- |
| Traversal | Access each element in the array      |
| Insertion | Add an element at a specific position |
| Deletion  | Remove an element                     |
| Searching | Find an element in the array          |
| Updating  | Modify an existing element            |

---

# 📊 Array Representation

Example array:

```text
Index : 0   1   2   3   4
Value : 10  20  30  40  50
```

Arrays store elements in **continuous memory blocks**, which allows **constant-time access**.

---

# 💻 C++ Implementation

Example of array usage in C++:

```cpp
#include <iostream>
using namespace std;

int main() {

    int arr[5] = {10, 20, 30, 40, 50};

    cout << "Array Elements:" << endl;

    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
```

---

# ⚙️ Time Complexity

| Operation | Complexity |
| --------- | ---------- |
| Access    | O(1)       |
| Search    | O(n)       |
| Insertion | O(n)       |
| Deletion  | O(n)       |

Access is **very fast** because elements are accessed using **index numbers**.

---

# 📚 Applications of Arrays

Arrays are widely used in programming and algorithms.

## 1️⃣ Storing Data Collections

Example:

* Marks of students
* Daily temperatures
* Product prices

---

## 2️⃣ Matrix Representation

Arrays are used to store **2D matrices**.

Example:

```text
1 2 3
4 5 6
7 8 9
```

---

## 3️⃣ Sorting Algorithms

Many sorting algorithms operate on arrays:

* Bubble Sort
* Selection Sort
* Merge Sort
* Quick Sort

---

## 4️⃣ Searching Algorithms

Arrays are used with searching techniques such as:

* Linear Search
* Binary Search

---

## 5️⃣ Dynamic Programming

Many **DP problems use arrays for storing intermediate results**.

---

# 🚀 Advantages of Arrays

✔ Fast access using indexing
✔ Simple to implement
✔ Efficient memory usage
✔ Useful for implementing other data structures

---

# ⚠️ Limitations

❌ Fixed size in static arrays
❌ Insertion and deletion are expensive
❌ Requires contiguous memory

---

# 📖 Example Problems Using Arrays

1️⃣ Two Sum Problem
2️⃣ Maximum Subarray (Kadane's Algorithm)
3️⃣ Merge Sorted Arrays
4️⃣ Find Duplicate Number
5️⃣ Rotate Array

---

# 👨‍💻 Author

**Prepared by:**

### Majid Tamboli

🔗 GitHub:
https://github.com/majidtamboli45

📘 Created as part of **Data Structures and Algorithms (DSA) practice using C++**.
