*Este proyecto ha sido creado como parte del currículo de 42 por chgomez.*

# ft_printf

## Description

`ft_printf` builds a static library, `libftprintf.a`, that exposes:

```c
int ft_printf(const char *format, ...);
```

The goal of the project is to recreate a subset of the standard C `printf`
function without using its internal implementation. It focuses on variadic
functions, format parsing, output control, number conversion, memory management
and integration with a custom `libft`.

## Features

The implementation supports the core conversions:

* `%c` for characters
* `%s` for strings
* `%p` for pointers
* `%d` and `%i` for signed decimal integers
* `%u` for unsigned decimal integers
* `%x` and `%X` for hexadecimal integers
* `%%` for a literal percent sign

The repository also includes bonus handling for flags, width and precision:

* `-`
* `0`
* `.`
* field width
* `#`
* space
* `+`

## Instructions

Build the mandatory library:

```bash
make
```

Build with bonus objects:

```bash
make bonus
```

Clean generated files:

```bash
make clean
make fclean
make re
```

## Project Structure

```text
.
├── Makefile
├── ft_printf.h
├── ft_printf.c
├── convert_*.c
├── handle_*.c
├── parse_format.c
├── bonus/
│   ├── ft_printf_bonus.h
│   └── *_bonus.c
└── libft/
    ├── Makefile
    ├── libft.h
    └── ft_*.c
```

## Usage Example

```c
#include "ft_printf.h"

int	main(void)
{
	ft_printf("Number: %d\n", 42);
	ft_printf("Hex: %#x\n", 42);
	return (0);
}
```

Compile with the generated static library:

```bash
cc main.c libftprintf.a -I. -Ilibft -o test_printf
```

## Algorithm and Data Structure Choices

The implementation uses a small `t_format` structure to keep parsing state for
each conversion. This structure stores width, precision and formatting flags in
one place, which keeps the parser and the converter functions separated.

The main `ft_printf` loop scans the format string from left to right. Regular
characters are written directly, while `%` starts a parsing step. The parser
fills a `t_format` value and then delegates the final output to the matching
converter function.

Each converter is responsible for one output family: characters, strings,
pointers, signed integers, unsigned integers, hexadecimal values and percent
signs. Numeric conversions use base-conversion helpers instead of hardcoded
printing logic, which makes decimal and hexadecimal formatting easier to reuse.

The project writes output with `write` and returns the number of printed
characters, following the behavior expected from `printf`. Dynamically allocated
strings are freed after use.

## Resources

* `man 3 printf`
* `man 3 stdarg`
* 42 ft_printf subject
* 42 Norm and peer evaluation practices

## What I Learned

* Using variadic arguments with `stdarg.h`
* Designing a parser for format specifiers
* Handling integer conversion across decimal and hexadecimal bases
* Managing field width, precision and formatting flags
* Returning accurate output counts like the original `printf`
* Building and linking a static C library with `make`

## Notes

This project follows the constraints and style expected in the 42 curriculum.  
The implementation is intentionally written in C and avoids relying on the standard `printf` internals.

## Author

Christian Gómez  
Junior Software Developer in training at 42 Barcelona  
GitHub: [github.com/chgomez04](https://github.com/chgomez04)
