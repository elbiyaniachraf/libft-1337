*This project has been created as part of the 42 curriculum by ael-biya.*

# Description

Libft is a project from the 42 curriculum. The goal is to create my own C library by writing functions that can be reused in future C projects.

The library contains functions for working with characters, strings, memory, numbers, and linked lists.

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

The library is divided into three parts.

## Part 1 – Libc Functions

This part contains my own versions of standard C library functions. It includes functions for checking characters, working with strings, and handling memory.

## Part 2 – Additional Functions

This part contains additional functions for creating and modifying strings, allocating and managing memory, and writing characters, strings, and numbers to file descriptors.

## Part 3 – Linked Lists

This part contains functions for creating linked-list elements, adding new elements, finding elements, counting elements, and deleting or clearing lists.

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

I mainly used AI to improve my understanding of Part 1, Part 2, Part 3, and the Makefile.

The goal was to learn more about the project, understand my code better, and be aware of things I might have overlooked.