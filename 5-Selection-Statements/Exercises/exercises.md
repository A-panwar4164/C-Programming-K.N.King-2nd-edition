# Overview  
This Document contains the answer for the exercises in this chapter which doesn't needed to be written in C.  
also in the same directory, the code for the exercises which needed to be written in C exist.  
Enjoy.

---
## exercise no. 1  
- see the `1-output.c` file (it exists in the same directory).

---
## exercise no. 2
- see the `2-output.c` file (it exists in the same directory).

---
## exercise no. 3
- see the `3-output.c` file (it exists in the same directory).

---

## exercise no. 4
- see the `4-output.c` file (it exists in the same directory).
- as i have written in the `4-output.c` program, we can approach this exercise using various solutions. the author of the book has provided `(i > j) - (i < j)` as a solution which is brilliant. I've tried a different way which is also correct (at least to my knowledge and the people around me at the time). my solution is `(i > j ? 1 : (i == j ? 0 : -1 ))`. I have approached this using ternary operator which is considered a single expression.
- you can write your own and i strongly advise you to, because it's a very good exercise.

---

## exercise no. 5
- The mentioned condition of the if statement (`(n >= 1 <= 10)`) is legal and program will compile. BUT it doesn't do what it's intended to do. firstly the `n >= 1` is evaluated (suppose the resulting value is named x) then it's result (x) would be evaluated in the `x <= 10`. since the value of `n >= 1` is either `1` or `0`, and both are less than or equal to 10, then the whole expression must be evaluated as `1`.
- we can fix this issue using the logical and operator (`&&`). we can rewrite the condition in this way: `n >= 1 && n <= 10`. this works as intended and check if the value of `n` is between (including) 1 and 10.

---

## exercise no. 6
- Yes, the if statement is legal in c. But keep in mind the condition of the this statement is actually checking if the value of `n` is equal to `-9` or not. 
- When the value of `n` is `5`, the conditional statement would do nothing, and nothing happens since it doesn't trigger our conditional statement (`(n == -9)`).

---
## exercise no. 7
- the ternary expression in the `printf` function call, is checking the value of `i` to be greater than or equal to `0`. if it is, the ternary expression would result in the value of `i`, if not - which means the value of `i` is negative - the ternary expression would result in the opposite value of `i` which in this case would also be a positive value.
- basically this ternary expression is returning the absolute value of the `i`.
- if the value of `i` is `17`, the printf function will produce `17`.
- if the value of `i` is `-17`, the printf function will produce `17` .

---
## exercise no. 8
- We can rewrite the whole thing using ternary operator which is shown below
- I have used parentheses for better readability.
```c
teenager = ((age >= 13 && age <= 19) ? true : false );
```

---
## exercise no. 9 
- The short answer to this exercise is `Yes`. both statements are equivalent.
- They assign the same grades for all possible values of score:
	- `A` for `score >= 90`
	- `B` for `90 > score >= 80`
	- `C` for `80 > score >= 70`
	- `D` for `70 > score >= 60`
	- `F` for `60 > score`
- The second statement simply checks the conditions in reverse order (starting from lower values), but the logic produces identical results.

---
## exercise no. 10
- First thing first, we must calculate the result of the expression `i % 3`. the result of this expression is `1`.
- The output of the given switch statement in question is `onetwo` since the cases don't have any breaks, the flow of the program falls through.

---

## exercise no. 11
- see the `11-output.c` file (it exists in the same directory).
