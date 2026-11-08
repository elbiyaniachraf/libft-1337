*This project has been created as part of the 42 curriculum by ael-biya.*

# Description

Libft is a project from the 42 curriculum. The goal is to create my own C library by reimplementing several standard C library functions and developing additional functions that can be reused in future C projects.

Through this project, I learned more about how common C functions work internally, how to manage memory, and how to manipulate strings and data structures. It also helped me improve my understanding of pointers, memory allocation, and the way C handles data.

The library is divided into three main parts, covering standard library functions, additional utility functions, and linked-list manipulation.

# Instructions

To compile the library, run:

```bash
make
```

This will create the `libft.a` static library.

To remove the object files:

```bash
make clean
```

To remove the object files and the library:

```bash
make fclean
```

To rebuild the library:

```bash
make re
```

To use the library in a C project, include the header:

```c
#include "libft.h"
```

Compile your program with the library:

```bash
cc main.c -L. -lft
```

# Library Description

The library is divided into three parts:

## Part 1 – Libc Functions

This part focuses on recreating functions from the standard C library (libc), using the `ft_` prefix for their names. The goal is to reproduce the original functions while respecting their expected behavior and prototypes.

It includes functions for character checking and conversion, such as `ft_isalpha`, `ft_isdigit`, and `ft_toupper`, as well as functions for working with strings, such as `ft_strlen`, `ft_strchr`, and `ft_strncmp`.

It also covers memory manipulation functions like `ft_memset`, `ft_memcpy`, `ft_memmove`, and `ft_memcmp`, along with functions for memory allocation and string duplication, such as `ft_calloc` and `ft_strdup`.

## Part 2 – Additional Functions

This part introduces functions that extend the functionality of the library. These functions are either not included in the standard C library or provide different functionality.

It includes string manipulation functions such as `ft_substr`, `ft_strjoin`, `ft_strtrim`, and `ft_split`, which allow creating, combining, trimming, and splitting strings.

It also includes functions for converting data, such as `ft_itoa`, and functions that apply custom operations to strings, such as `ft_strmapi` and `ft_striteri`.

Finally, this part introduces functions for writing characters, strings, and numbers to a specific file descriptor using `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, and `ft_putnbr_fd`.

## Part 3 – Linked Lists

This part focuses on working with linked lists, a data structure made up of nodes connected through pointers. Each node contains a `content` field, which can store different types of data, and a `next` pointer, which points to the following node.

The implementation starts with `ft_lstnew`, which creates and initializes a new node. Other functions allow adding nodes at the beginning or end of a list, retrieving the last node, and counting the total number of nodes.

It also includes functions for managing and manipulating lists, such as `ft_lstdelone` and `ft_lstclear` for freeing nodes and their content, and `ft_lstiter` for applying a function to each node.

Finally, `ft_lstmap` creates a new list by applying a given function to the content of each node in an existing list.

Together, these functions provide basic tools for creating, traversing, modifying, and managing linked lists.

# Resources

The following resources were used during the project:

- 42 Libft Subject.
- C documentation: https://en.cppreference.com/w/c
- Linux manual pages: https://man7.org/linux/man-pages/
- Makefile Tutorial: https://makefiletutorial.com/
- Linux man-pages – libc(7): https://man7.org/linux/man-pages/man7/libc.7.html

## AI Usage

I used AI as a learning tool throughout this project. It helped me understand how functions work, get explanations of C concepts, and go deeper into different parts of Libft.

I also used it to:

- Understand code and the reasons behind certain instructions.
- Find other possible cases that I might have missed.
- Think about edge cases and improve my tests.
- Understand concepts that were not clear to me.
- Discover details and possible problems that I might not have noticed on my own.
- Review my code and help me understand potential errors.
