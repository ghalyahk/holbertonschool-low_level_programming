# Holberton School - Low Level Programming

## more_malloc_free Directory

This directory contains implementations of dynamic memory allocation functions in C, including:

- `malloc_checked` — malloc wrapper that terminates the program on failure.
- `string_nconcat` — concatenates two strings with specified length.
- `array_range` — creates an array of integers within a given range.
- And others.

---

## Files

| Filename           | Description                                    |
|--------------------|------------------------------------------------|
| `0-malloc_checked.c` | Function that allocates memory using malloc and exits on failure. |
| `1-string_nconcat.c` | Concatenates two strings, up to n bytes from second string. |
| `3-array_range.c`    | Creates an array of integers from min to max.  |
| `main.h`            | Header file containing function prototypes and struct definitions. |
| `dog.h`             | Defines the struct dog used for dog info.      |

---

## Compilation

Use the following command to compile files:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <file1.c> <file2.c> -o output
