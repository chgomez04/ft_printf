# Libft

Custom C library developed as part of the 42 Barcelona curriculum.

## Overview

Libft is my first C library, created by reimplementing a selection of standard C library functions and adding extra utility functions used in later 42 projects.

The project focuses on understanding how common C functions work internally, working with memory, strings, characters, linked lists and building reusable code with a clean header and Makefile.

## Features

* Character checking and conversion functions
* String manipulation functions
* Memory manipulation functions
* File descriptor output functions
* Dynamic memory allocation helpers
* Linked list utilities
* Custom Makefile to build a static library

## Function Categories

### Character functions

* `ft_isalpha`
* `ft_isdigit`
* `ft_isalnum`
* `ft_isascii`
* `ft_isprint`
* `ft_toupper`
* `ft_tolower`

### String functions

* `ft_strlen`
* `ft_strchr`
* `ft_strrchr`
* `ft_strncmp`
* `ft_strnstr`
* `ft_strdup`
* `ft_substr`
* `ft_strjoin`
* `ft_strtrim`
* `ft_split`
* `ft_strmapi`
* `ft_striteri`

### Memory functions

* `ft_memset`
* `ft_bzero`
* `ft_memcpy`
* `ft_memmove`
* `ft_memchr`
* `ft_memcmp`
* `ft_calloc`

### Conversion functions

* `ft_atoi`
* `ft_itoa`

### Output functions

* `ft_putchar_fd`
* `ft_putstr_fd`
* `ft_putendl_fd`
* `ft_putnbr_fd`

### Linked list functions

* `ft_lstnew`
* `ft_lstadd_front`
* `ft_lstsize`
* `ft_lstlast`
* `ft_lstadd_back`
* `ft_lstdelone`
* `ft_lstclear`
* `ft_lstiter`
* `ft_lstmap`

---

## How to Build

```bash
make
```

This command generates the static library:

```bash
libft.a
```

To remove object files:

```bash
make clean
```

To remove object files and the library:

```bash
make fclean
```

To rebuild the project:

```bash
make re
```

## Example Usage

```c
#include "libft.h"

int main(void)
{
    ft_putstr_fd("Hello from Libft!\n", 1);
    return (0);
}
```

Compile with:

```bash
cc main.c libft.a -o test
```

Run:

```bash
./test
```

---

## What I Learned

* How standard C library functions work internally
* Manual memory management in C
* Pointer manipulation
* String and memory operations
* Linked list fundamentals
* Header file organization
* Static library compilation
* Makefile usage
* Writing reusable C code

## Project Context

This project was developed at 42 Barcelona as part of the common core curriculum.
It follows the 42 coding style and project constraints.

## Author

Christian Gómez
Junior Software Developer in training at 42 Barcelona
GitHub: [github.com/chgomez04](https://github.com/chgomez04)
