*Este proyecto ha sido creado como parte del currículo de 42 por vvan-ach*

# libft ft_printf - C Library

<p align="center">
	<img src="https://i.ibb.co/vvxmGwq2/Chat-GPT-Image-Dec-18-2025-01-10-22-AM-1.png" width="800">
</p>

## Description

	Libft is a C library that provides access to useful and necessary functions for the rest of the course.
	It contains a Makefile that provides useful compilation commands, an srcs/ folder that contains all
	the .c code for the aforementioned functions, and an include folder that contains the header with the
	prototypes for all the functions and the declaration of the t_list type (list type structure).

## Instructions
#### The Libft library must be compiled before it can be used in your C code. To do this, simply run it with the Makefile as follows:

**`make`**
> Compiles the entire library, with libft.a as the output file, which can be used anywhere to access the library's functions.

**`make clean`**
> Allows you to ‘clean’ the compilation files, only those that are generated during the compilation of the final file.

**`make fclean`**
> Allows you to “clean” the compilation files and the final output file. Everything will be deleted, leaving only the base files and folders, uncompiled.

**`make re`**
> Allows you to ‘clean’ everything, as with fclean, and then completely recompile the library.

#### The compiled library is used as follows:
1. Take the compiled libft.a and libft.h
2. Put them in a folder, for example libft/:
    ```
        my_project/
	    ├── libft/          # folder containing compiled libft
	    │   ├── libft.a
	    │   └── libft.h
	    ├── src/
	    │   └── main.c
	    └── Makefile
    ```
3. Include the library in your code as follows:
    ```
    #include “libft.h”
    #include <stdio.h>
    int main(void)
    {
        printf(“Hello world!”);
        return (0);
    }
    ```
4. Write the Makefile including Libft in this way:

    ```
	# Flags and compiler
	CC = gcc

	# Include folder libft (to find the libft.h that your code calls, see last step)
	CFLAGS = -Wall -Wextra -Werror -Ilibft

	# Source files and executables
	SRCS = src/main.c
	OBJS = $(SRCS:.c=.o)
	LIBFT = libft/libft.a # Compiled libft
	NAME = my_program

	all: $(NAME)

	# Compile with the libft.a and the libft.h found in the libft folder
	$(NAME): $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

	%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@

	clean:
		rm -f $(OBJS)

	fclean: clean
		rm -f $(NAME)

	re: fclean all
	```

## Detailled description of Libft

- This library is my personal implementation of a set of functions that are mostly re-implementations of the standard C library, with some extra useful tools for managing strings, memory and linked lists.

- The library provide functions like ft_strlen, ft_strchr, ft_strncmp for string manipulation, ft_memset, ft_memcpy for memory management, and also linked list operations like ft_lstnew, ft_lstadd_front, ft_lstsize and more. The goal of this library is to give a strong base for C projects, where we can use these functions instead of standard functions or write more complex logic on top.

## Ressources
1. [w3schools](https://www.w3schools.com/c/):
    Good website to understand C functions completely, full of snippets and explainations. I recommend.
2. [ChatGPT](https://chatgpt.com):
    The ai that everyone knows, to confirm and give me optimisation ints when I have a working code.
3. [Stackexchange](https://stackexchange.com):
    The website when I want to read extensive responses to simple questions
