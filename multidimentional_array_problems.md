# Multidimentional Array Problems

### **Problem 1: Initialize and Print a 2D Array**
Write a program to declare a 3x3 2D array, initialize it with values from 1 to 9, and print the elements in a matrix format.

| Test Cases | **Input**       | **Output**         |
|------------|-----------------|--------------------|
| 1          | N/A (hardcoded) | 1 2 3 <br> 4 5 6 <br> 7 8 9 |

---

### **Problem 2: Sum of Rows and Columns**
Write a program that takes a 2D array of size 3x3 as input and calculates the sum of each row and column.

| Test Cases | **Input**             | **Output**                                                                 |
|------------|-----------------------|----------------------------------------------------------------------------|
| 1          | 1 2 3 <br> 4 5 6 <br> 7 8 9 | Row Sums: 6, 15, 24 <br> Column Sums: 12, 15, 18                           |
| 2          | 2 2 2 <br> 3 3 3 <br> 1 1 1 | Row Sums: 6, 9, 3 <br> Column Sums: 6, 6, 6                               |

---

### **Problem 3: Transpose of a Matrix**
Write a program that takes a 3x3 matrix as input and prints its transpose.

| Test Cases | **Input**             | **Output**             |
|------------|-----------------------|------------------------|
| 1          | 1 2 3 <br> 4 5 6 <br> 7 8 9 | 1 4 7 <br> 2 5 8 <br> 3 6 9 |
| 2          | 2 4 6 <br> 8 10 12 <br> 14 16 18 | 2 8 14 <br> 4 10 16 <br> 6 12 18 |

---

### **Problem 4: Matrix Multiplication**
Write a program to multiply two 2x2 matrices `A` and `B`, and output the resulting matrix `C`.

| Test Cases | **Input (Matrix A, B)**              | **Output (Matrix C)** |
|------------|--------------------------------------|------------------------|
| 1          | A = 1 2 <br> 3 4 <br> B = 5 6 <br> 7 8 | 19 22 <br> 43 50      |
| 2          | A = 2 0 <br> 1 3 <br> B = 1 2 <br> 0 4 | 2 8 <br> 1 14         |

---

### **Problem 5: Search an Element in a 2D Array**
Write a program that takes a 3x3 matrix as input and searches for an element in the array. Output the position of the element if found.

| Test Cases | **Input**             | **Search** | **Output**           |
|------------|-----------------------|------------|----------------------|
| 1          | 1 2 3 <br> 4 5 6 <br> 7 8 9 | 5          | Found at (1, 1)     |
| 2          | 1 0 -1 <br> 2 4 6 <br> 3 9 12 | -1         | Found at (0, 2)     |

---

### **Problem 6: Check Symmetric Matrix**
Write a program that checks if a 3x3 matrix is symmetric (i.e., equal to its transpose).

| Test Cases | **Input**             | **Output**              |
|------------|-----------------------|-------------------------|
| 1          | 1 2 3 <br> 2 4 5 <br> 3 5 6 | The matrix is symmetric |
| 2          | 1 0 1 <br> 0 1 0 <br> 1 0 2 | The matrix is not symmetric |

---

### **Problem 7: Rotate a Matrix by 90 Degrees**
Write a program that rotates a 3x3 matrix by 90 degrees clockwise.

| Test Cases | **Input**             | **Output**             |
|------------|-----------------------|------------------------|
| 1          | 1 2 3 <br> 4 5 6 <br> 7 8 9 | 7 4 1 <br> 8 5 2 <br> 9 6 3 |
| 2          | 2 4 6 <br> 8 10 12 <br> 14 16 18 | 14 8 2 <br> 16 10 4 <br> 18 12 6 |

---

### **Problem 8: Find Maximum in Each Row**
Write a program to find and print the maximum element in each row of a 2D array.

| Test Cases | **Input**             | **Output**       |
|------------|-----------------------|------------------|
| 1          | 1 2 3 <br> 4 5 6 <br> 7 8 9 | Row 1: 3 <br> Row 2: 6 <br> Row 3: 9 |
| 2          | -1 0 -2 <br> 5 3 1 <br> 7 2 8 | Row 1: 0 <br> Row 2: 5 <br> Row 3: 8 |

---

### **Problem 9: Spiral Traversal of a Matrix**
Write a program that prints the elements of a 3x3 matrix in a spiral order.

| Test Cases | **Input**             | **Output**         |
|------------|-----------------------|--------------------|
| 1          | 1 2 3 <br> 4 5 6 <br> 7 8 9 | 1, 2, 3, 6, 9, 8, 7, 4, 5 |
| 2          | 1 1 1 <br> 1 2 1 <br> 1 1 1 | 1, 1, 1, 1, 1, 1, 1, 1, 2 |

---

### **Problem 10: Pascal’s Triangle**
Write a program that generates Pascal's Triangle up to a given number of rows using a 2D array.

| Test Cases | **Input** | **Output**               |
|------------|-----------|--------------------------|
| 1          | 5         | 1 <br> 1 1 <br> 1 2 1 <br> 1 3 3 1 <br> 1 4 6 4 1 |
| 2          | 3         | 1 <br> 1 1 <br> 1 2 1   |
