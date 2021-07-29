# PRINTF REPOSITORY

## Description

This repository contains a verson of the **printf** function for C programming language called **_printf**. This function can do the basic functionality of the original printf function, such as printing **chars, strings and integers** using the format specifier (%) and the corresponding letter (%c for chars, %d or %i for integers and %s for strings). For more information about the original printf, visit [printf manual page](https://man7.org/linux/man-pages/man3/printf.3.html).

For this program to run, we suggest you use it in **Ubuntu 20.04.2 LTS (Focal Fossa)** version, and for compiling, use **gcc 9.3.0 version**, with the following command:

```shell
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
```

![first screenshot](/images/1.png)
![second screenshot](/images/2.png)


This command will create the executable a.out. To give it a custom name, add the flag -o followed by the name (e.g gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c -o _printf_test). Notice that you need your version of a *main.c* file to test the function, or you can use the *main.c* file that is in the test directory.

![third screenshot](/images/3.png)

## Flowchart

The following is a flowchart design to understand the algorithm of the _printf function:

![flowchart](/images/flowchart.jpg)

This repository contains the following files:

### holberton.h

This is a header file that contains all the prototypes, libraries and a structure necessary for the program to compile and work. 

The structure contained in the program is called "cases" and it has 2 members:
1. char *letter: a pointer to a letter. This letters are the options available to use as a format specifier.
2. int (*f)(va_list): a pointer to a function that receives a va_list pointer and returns an integer. This pointer is the reference to the specified fucntion, depending of the letter specified.
		      Then the structure cases is defined as a type "option".

### printf_function.c

This file contains the **_printf** function (prototype: int _printf(const char *format, ...), which is a variadic function that recieve a mandatory argument (format) and optional arguments that specifies the content that have to appear in the position of the format specifiers. Format is the string that is recieved by _printf, which may contain text algonside format specifiers (e.g _printf("Hello, %s", "World");). In this example, **"Hello, %s"** is the format string, **%s** is a format specifier and **"World"** is the optional argument that will appear in the position where %s is located. This function contains a while loop that evaluates every char in the *format* string, and depending on the case, it prints the char or goes to another function for further evaluation. This function contains an specific case, that is when there is a '%' followed by a null character ('\0'), in which case it doesn't print the '%' and returns -1, no matter how many chars it printed before. The _printf function is accompanied by 2 auxiliary functions:
1. **aux_function** (prototype: int (*aux_function(const char *format))(va_list)): This function contains a structure type "option" (see holberton.h for further understanding) called *rows* that contains each letter of the format specifier that _printf can detect as a call to a particular function (e.g "c" to call print_char function). The while loop below the structure has the purpose of compare the letter that goes after the '%' char in order to know which functions is being called (if there is no coincidende, the function returns NULL and no function is called, so the _printf fucntion will print the % alognside the specified letter without changing it).
2. **case_percentage** (prototype: int case_percentage(const char *format, va_list list)): This function is called when in the _printf, the format argument contains a %, so this function evaluates which case it is, of the following 4:
- %%, in this case, only one % is printed.
- %, and a correct letter (c, d, i, etc), in this case, the corresponding function contained in the *rows* structure is called.
- %, and an incorrect letter (y, m, n, etc) in this case the % and the letter are printed.
- %, followed by a new line ('\n') in this case the % and the new line are printed.

### _putchar.c

This file contains the function _putchar, which uses the function write to print one byte, and returns the value 1 of 1 byte printed.

### print_char_functions.c

This file contains functions that prints text in different formats. This functions returns the count of chars printed This funtcions are:
- **print_char** (prototype: int print_char(va_list c)): This function prints a single char.
- **print_str** (prototype: int print_str(va_list s)): This fucntion prints a string, or **(null)** if a nul pointer was passed.
- **print_rev** (prototype: int print_rev(va_list s)): This function prints a string in reverse.
- **print_rot13** (prototype: int print_rot13(va_list s)): This function prints a string in rot13 format.

### print_number_functions.c

This file contains functions that prints numbers in different formats. This functions returns the count of numbers printed. This functions are:
- **print_integer** (prototype: int print_integer(va_list i)): this function prints an integer number, from INT_MIN to INT_MAX.
- **print_bin** (prototype: int print_bin(va_list n)): this function converts an unsigned integer into a binary number and print it.
- **print_hex_minus** (prototype: int print_hex_minus(va_list num)): this function converts an integer into a hexadecimal number and print it. This version prints the hexadecimal in minus.
- **print_hex_mayus** (prototype: int print_hex_mayus(va_list num)): this function converts an integer into a hexadecimal number and print it. This version prints the hexadecimal in MAYUS.

### auxiliar_functions.c

This file contains auxiliar function of print_integer.
- **_print_rev** (prototype: : prints an integer in reverse
- **_abs**: converts an integer in its absolute value

### print_adress_function.c

This file contains functions that together prints an address.
- **print_address** (prototype: int print_address(va_list p)): recieves an unsigned long int. If it is 0, prints "(nil)", otherwise it prints a 0, an x and it calls the function hex_to_string.
- **hex_to_string** (prototype: int hex_to_string(unsigned long int number, int lw)): gets the unsigned long int and converts it to an hexadecimal number, which is stored in an array (in reverse) that is printed with the function _print_rev.

## Specifications

This repository was made with the following authorized functions and macros:
```shel
write (man 2 write)
malloc (man 3 malloc)
free (man 3 free)
va_start (man 3 va_start)
va_end (man 3 va_end)
va_copy (man 3 va_copy)
va_arg (man 3 va_arg)
```

## Authors

This repository was made by:
- Juan Sebastian Gonzalez
Twitter: @juancho1141
- Juan Sebastian Perea
Twitter: @JuanSePeBe95
IG: @sebaspbf
