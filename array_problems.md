# Array Problems

### Problem 1: Calculate the average, min, max of array `A`
Given an array of integer `A` of size `n`. Prints the average, min, max of `A`.

| Test Cases | **Input** | **Output** |
|------------|-----------|------------|
| 1          | 1 2 3 4        | 2.5 1 4   |
| 2          | 0 -19 40 2 12        | 7 -19, 40 |


### Problem 2: Print All Divisibles by `m`
Given array of integer `A` of size `n` and an integer `m`. Prints all integers in `A` that are divisible by `m`. If no such integer is divisible by `m`, print -1. 

| Test Cases | **Input** | **Output** |
|------------|-----------|------------|
| 1          | A={1, 2, 3, 4}, m=10        | -1    |
| 2          | A={0, -19, 40, 2, 12}, m=2        | 0, 40, 2, 12 |


### Problem 3: Check if A is sorted in ascending order
Given an array of integer `A` of size `n`. Return `true` if `A` is sorted in ascending order. Otherwise print `false`.

| Test Cases | **Input** | **Output** |
|------------|-----------|------------|
| 1          | 1 2 3 4        | `true`    |
| 2          | 0 -19 40 2 12        | `false` |

### Problem 4: Merge two sorted Arrays
You are given two sorted arrays of integers:  
- `A` of size `n`  
- `B` of size `m`  

Write a function that merges these two arrays `A,B` into a third sorted array `C` and return `C`. The resulting array `C` should contain all the elements from both `A` and `B`, sorted in ascending order.


| Test Cases | **Input** | **Output** |
|------------|-----------|------------|
| 1          | A={1, 2, 3, 4}, B={-54, 0, 4, 123}        | C={-54, 0, 1, 2, 3, 4, 123}    |
| 2          | A={1,10, 100}, B={0, 5, 50, 500, 5000}        | C={0, 1, 5, 10, 50, 100, 500, 5000} |


