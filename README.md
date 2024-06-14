# ft_printf

## Overview

`ft_printf` is a project assigned to students at international school 42. The goal is to create a custom implementation of the C standard library's `printf` function. This project helps learn  variadic functions.

## Project Objectives

- Implement a custom version of the `printf` function.
- Handle various data type conversions.

## **Functionality**:

- Reimplement the `printf` function with the prototype:

```c
int ft_printf(const char *, ...);
```

Handle the following conversions:

- `%c`: Prints a single character.
- `%s`: Prints a string.
- `%p`: Prints a pointer in hexadecimal format.
- `%d`/`%i`: Prints a decimal (base 10) number.
- `%u`: Prints an unsigned decimal (base 10) number.
- `%x`: Prints a number in hexadecimal (base 16) lowercase format.
- `%X`: Prints a number in hexadecimal (base 16) uppercase format.
- `%%`: Prints a percent sign.

## Getting Started

1. **Clone the repository**:

```bash
git clone https://github.com/stanislavmg/ft_printf.git
```

1. **Compile the project**:

```bash
make
```