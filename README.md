*This project has been created as part of the 42 curriculum by ael-biya.*

# Description

Libft is the first project in the 42 curriculum. The goal of this project is to create my own C library by rewriting several functions from the standard C library and developing additional functions.

The project is divided into three parts. The first part focuses on rewriting existing C functions that work with characters, memory, strings, and numbers. The second part introduces additional functions for creating, modifying, and handling strings, as well as displaying characters, strings, and numbers. The third part focuses on linked lists, with functions to create, add, delete, and manage list elements.

Throughout this project, I learned how these functions work by implementing them myself, handling memory allocation, working with pointers, and testing different cases.

The final result is a reusable library called `libft.a`, which contains these functions and can be included in future C projects to avoid rewriting the same code.

# Instructions

### Compilation

To compile the library, run:

```bash
make
```

This creates the `libft.a` library file.

Other available commands:

```bash
make clean   # Remove object files
make fclean  # Remove object files and the library
make re      # Recompile the library
```

### Using the library

Include the header file in your C file:

```c
#include "libft.h"
```

Compile your program with the library:

```bash
cc main.c -L. -lft -o program
```

# Library Description

The library contains the following functions:

### Part 1 - Libc Functions

This part contains my own versions of existing C functions.

- **Character checks:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`.
- **Memory operations:** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`.
- **String operations:** `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`.
- **Character conversion:** `ft_toupper`, `ft_tolower`.
- **Number conversion:** `ft_atoi`.

### Part 2 - Additional Functions

This part contains additional functions for working with strings, characters, and output.

- **String operations:** `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`.
- **Number conversion:** `ft_itoa`.
- **String iteration:** `ft_strmapi`, `ft_striteri`.
- **Output functions:** `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`.

### Part 3 - Linked Lists

This part contains functions for creating and working with linked lists.

- `ft_lstnew`: Creates a new node.
- `ft_lstadd_front`: Adds a node at the beginning of the list.
- `ft_lstsize`: Counts the number of nodes.
- `ft_lstlast`: Returns the last node.
- `ft_lstadd_back`: Adds a node at the end of the list.
- `ft_lstdelone`: Deletes one node.
- `ft_lstclear`: Deletes the entire list.
- `ft_lstiter`: Applies a function to each node.
- `ft_lstmap`: Creates a new list by applying a function to each node.

### References

The following resources were used during the project:

- 42 Libft Subject.
- C documentation: https://en.cppreference.com/w/c
- Linux manual pages: https://man7.org/linux/man-pages/
- Makefile Tutorial: https://makefiletutorial.com/
- Linux man-pages – libc(7): https://man7.org/linux/man-pages/man7/libc.7.html

These resources were used to understand the original C functions and their behavior.

### AI Usage

AI was used as a learning tool during this project:

- To understand C concepts and how the original functions work.
- To get explanations about pointers, memory allocation, and linked lists.
- To check possible test cases and edge cases.
- To review parts of the code and understand possible errors.

All explanations and suggestions were reviewed to improve my understanding of the functions and their implementation.