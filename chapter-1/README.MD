# Chapter 1 - A Tutorial Introduction
## How to compile
We can compile (and run) C programming languange with this command
```bash
cc <fileName.c> -o <outputName.out>
```
## What I learn?
The `#include <stdio.h>` tells compiler to include information about standard input/output library. But when I comment the `#include <stdio.h>` out of the code, it still compiles successfully but the compiler tells me that there are some warning.
```bash
hello.c:3:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
    3 | main() {
      | ^~~~
hello.c: In function ‘main’:
hello.c:4:5: warning: implicit declaration of function ‘printf’ [-Wimplicit-function-declaration]
    4 |     printf("hello world! \n");
      |     ^~~~~~
hello.c:1:1: note: include ‘<stdio.h>’ or provide a declaration of ‘printf’
  +++ |+#include <stdio.h>
    1 | // #include <stdio.h>
hello.c:4:5: warning: incompatible implicit declaration of built-in function ‘printf’ [-Wbuiltin-declaration-mismatch]
    4 |     printf("hello world! \n");
      |     ^~~~~~
hello.c:4:5: note: include ‘<stdio.h>’ or provide a declaration of ‘printf’
ekky-kharismadhany@Thinkbook14:~/learning/belajar-c/bab-1$ rm hello.out 
ekky-kharismadhany@Thinkbook14:~/learning/belajar-c/bab-1$ cc hello.c -o hello.out
hello.c:3:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
    3 | main() {
      | ^~~~
hello.c: In function ‘main’:
hello.c:4:5: warning: implicit declaration of function ‘printf’ [-Wimplicit-function-declaration]
    4 |     printf("hello world! \n");
      |     ^~~~~~
hello.c:1:1: note: include ‘<stdio.h>’ or provide a declaration of ‘printf’
  +++ |+#include <stdio.h>
    1 | // #include <stdio.h>
hello.c:4:5: warning: incompatible implicit declaration of built-in function ‘printf’ [-Wbuiltin-declaration-mismatch]
    4 |     printf("hello world! \n");
      |     ^~~~~~
hello.c:4:5: note: include ‘<stdio.h>’ or provide a declaration of ‘printf’
```
In this chapter, I don't understand any of this warning. Maybe we can configure the compiler to fail the compilation process if there is an error.

I also learn that there are some character in C that can be used as newline character, `\n`. There are also `\t` for tab, `\b` for backspace.

In C, there are different type of `int` and `float`, including

1. char: single byte
2. short: short integer
3. long: long integer
4. double: double-precision floating point 
## Exercise
### Exercise 1-1
Run the `hello, world` program on your system. Experiment with leaving 
out parts of the program, to see what error messages you get.

We already try to comment the `#include<stdio.h>`, the compiler still compiles our program successfully, just with warning.
### Exercise 1-2
I try to add `\c` on the program, I have this error.
```bash
exercise-2.c: In function ‘main’:
exercise-2.c:4:30: warning: unknown escape sequence: '\c'
    4 |     printf("hello world!\n\c");
      | 
```
So, C programming language only allow specific escape sequence.
### Exercise 1-3
Modify the temperature conversion program to print a heading above the table. 

Adding this line of code adds header to the table.
```c
printf("C\tF\n");
```
### Exercise 1-4
Write a program to print the corresponding Celsius to Fahrenheit table.

Change the formula of the equation to this
```C
fahrenheit = (celcius * 9.0 / 5.0) + 32.0;
```
We can have result like this
```bash
C       F
0.000   32.000
20.000  68.000
40.000  104.000
60.000  140.000
80.000  176.000
100.000 212.000
```
### Exercise 1-5
Modify the temperature conversion program to print the table in reverse order, 
that is, from 300 degrees to 0.

In order to this exercise, I flip the parameter of `for` command to something like this
```c
for (fahrenheit = 300; fahrenheit >= 0; fahrenheit -= 50) {
  // ...
}
```
The parameter starts with declaration of initial value of the `fahrenheit` variable. Then, the second parameter `fahrenheit >= 0` is used to terminate the for loop, and `fahrenheit -= 50` used as a controller on how much decrement we operate in this loop.