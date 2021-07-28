# PRINTF REPOSITORY

## Description

This repository contains a verson of the **printf** function for C programming language called **_printf**. This function can do the basic functionality of the original printf function, such as printing **chars, strings and integers** using the format specifier (%) and the corresponding letter (%c for chars, %d or %i for integers and %s for strings). For more information about the original printf, visit [printf manual page](https://man7.org/linux/man-pages/man3/printf.3.html).

For this program to run, we suggest you use it in **Ubuntu 20.04.2 LTS (Focal Fossa)** version, and for compiling, use **gcc 9.3.0 version**, with the following command:

```shell
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
```
Notice that you need your version of a *main.c* file to test the function, or you can use the *main.c* file that is in the test directory.

### Authorized functions and macros
```shell
write (man 2 write)
malloc (man 3 malloc)
free (man 3 free)
va_start (man 3 va_start)
va_end (man 3 va_end)
va_copy (man 3 va_copy)
va_arg (man 3 va_arg)
```
