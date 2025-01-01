# ft_printf

## Introduction

This project focuses on recreating the popular and highly useful C function `printf()`. It offers a great opportunity to enhance your software development skills by exploring variadic functions in C. By the end of this project, you will have your own `ft_printf()` function that you can integrate into your `libft` and use in other school projects.

## Project Requirements

### Mandatory Files

- `Makefile`: Compiles and links the library.
- Header files: `*.h` and `*/*.h`.
- Source files: `*.c` and `*/*.c`.

### Compilation Flags

The project must adhere to the following rules:
- Use `-Wall`, `-Wextra`, and `-Werror` flags during compilation.
- Your Makefile must include the rules: `all`, `clean`, `fclean`, and `re`.

## Mandatory Features

Write a `ft_printf()` function that mimics the behavior of the original `printf()` function. The prototype is as follows:

```c
int ft_printf(const char *, ...);
```
## Requirements:
The function must handle the following conversions:
- %c: Print a single character.
- %s: Print a string of characters.
- %p: Print a pointer address in hexadecimal format.
- %d/%i: Print a signed decimal integer.
- %u: Print an unsigned decimal integer.
- %x/%X: Print a hexadecimal integer (lowercase/uppercase).
- %%: Print a percent sign.
  
You cannot implement any buffer management.
The function must perform identically to the standard printf() for the above conversions.
Use the following standard functions: `malloc`, `free`, `write`, `va_start`, `va_arg`, `va_copy`, and `va_end`.
## Additional Notes:
The compiled library must be named `libftprintf.a`.
Ensure your implementation is modular, clean, and easily extensible.

### Usage
## Building the Library
To compile the library, run the following command:


```bash
make
```
## Cleaning Up
To clean up object files:

```
make clean
```
To remove all compiled files and the library:

```
make fclean
```
To recompile everything:

```
make re
```
## Evaluation and Testing
Ensure your code complies with the Norm standards.
Avoid undefined behavior such as segmentation faults, memory leaks, or invalid accesses.
Test your implementation thoroughly against the original printf().
## Repository Structure
bash
```text
project-root/
├── Makefile
├── ft_printf.h
├── ft_printf.c
├── bonus/
└── test/
```
## Notes
Testing your ft_printf function is strongly recommended. Use test cases to ensure it behaves identically to the original printf().
Commit all necessary files to your Git repository. Only the repository content will be evaluated.
