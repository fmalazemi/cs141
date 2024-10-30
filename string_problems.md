# String Problems

### Problem 1: Palindrome (case-sensitive)

Write a program that takes a string `S` of English letters as input and checks if it is a palindrome. A palindrome is an English word that reads the same backward as forward. If `S` is a palindrome, print `"Palindrome"`, otherwise print `"Not Palindrome"`.

*Note that the check is case-sensitive.*

| Test Cases | **Input** | **Output** |
|------------|-----------|------------|
| 1          | `rAdaR`   | `Not Palindrome` |
| 2          | `Ww`      | `Not Palindrome` |
| 3          | `KuwaitiawuK` | `Palindrome` |
| 4          | `noon`    | `Palindrome` |

### Problem 2: Palindrome (case-insensitive)

Write a program that takes a string `S` of English letters as input and checks if it is a palindrome. A palindrome is an English word that reads the same backward as forward. If `S` is a palindrome, print `"Palindrome"`, otherwise print `"Not Palindrome"`.  
~~Note that the check is case-sensitive.~~  
**Note**: Similar to Problem 1 but the check is case-insensitive.

| Test Cases | **Input** | **Output** |
|------------|-----------|------------|
| 1          | `rAdaR`   | `Palindrome` |
| 2          | `Ww`      | `Palindrome` |
| 3          | `KuwaitIAWUK` | `Palindrome` |
| 4          | `Moon`    | `Not Palindrome` |

### Problem 3: Count Vowels (case insensitive)

Write a program that takes a string `S` as input. Your program should print the number of vowels `(a, e, i, o, u)` in `S` case-insensitive.

| Test Cases | **Input** | **Output** |
|------------|-----------|------------|
| 1          | `Hello World` | `3` |
| 2          | `Aa`       | `2` |
| 3          | `Programming is learned by writing programs.` | `11` |
| 4          | `KWT`      | `0` |

### Problem 4: Reverse string `S`

Write a program that reads a string `S` and prints it in reverse order.

| Test Cases | **Input** | **Output** |
|------------|-----------|------------|
| 1          | `Hello World` | `dlroW olleH` |
| 2          | `Reverse?   ` | `   ?esteveR` |
| 3          | `Learn$Programming$by*Practice` | `ecitcarP*yb$gnimmargorP$nraeL` |
| 4          | `KayaK`    | `KayaK` |

### Problem 5: Most Frequent English alphanumeric character (Case-insensitive)

Write a program that takes a string `S` as input and outputs the most frequent alphanumeric character (A-Z, a-z, 0-9). If multiple characters have the same highest frequency, print the first one that appears in `S`.

| Test Cases | **Input** | **Output** |
|------------|-----------|------------|
| 1          | `aabbccddeeffgg` | `'a' appears 2 times` |
| 2          | `999999aa` | `'9' appears 6 times` |
| 3          | `()()()+=` | `No alphanumeric characters in the input.` |
| 4          | `z123456`  | `'z' appears 1 time` |
