# Singly Linked Lists

## Description
This repository contains a set of C functions and a header file to work with singly linked lists. The linked list data structure is implemented using a struct called `list_s`, which consists of three members: `char *str`, `unsigned int len`, and `struct list_s *next`.

## Tests ✔️
The `tests` directory contains test files to ensure the proper functioning of the functions.

## Header File 📁
The `lists.h` header file includes definitions and function prototypes for all types and functions used in this project.

### Type/File Definitions and Prototypes
- `struct list_s`: Represents a node in the linked list and has the following members:
    - `char *str`: A pointer to a string.
    - `unsigned int len`: The length of the string.
    - `struct list_s *next`: A pointer to the next node in the list.
- `typedef list_t`: A synonym for `struct list_s`.
- `size_t print_list(const list_t *h)`: Prototype for the function that prints all the elements of a list_t list.
- `size_t list_len(const list_t *h)`: Prototype for the function that returns the number of elements in a linked list_t list.
- `list_t *add_node(list_t **head, const char *str)`: Prototype for the function that adds a new node at the beginning of a list_t list.
- `list_t *add_node_end(list_t **head, const char *str)`: Prototype for the function that adds a new node at the end of a linked list_t list.
- `void free_list(list_t *head)`: Prototype for the function that frees a list_t list.

## Tasks 📃
1. **Print List** (0-print_list.c):
    - C function that prints all the elements of a list_t list.
    - If `str` is `NULL`, the function prints `[0] (nil)`.

2. **List Length** (1-list_len.c):
    - C function that returns the number of elements in a linked list_t list.

3. **Add Node** (2-add_node.c):
    - C function that adds a new node at the beginning of a list_t list.
    - If the function fails, it returns `NULL`.
    - Otherwise, it returns the address of the new element.

4. **Add Node at the End** (3-add_node_end.c):
    - C function that adds a new node at the end of a linked list_t list.
    - If the function fails, it returns `NULL`.
    - Otherwise, it returns the address of the new element.

5. **Free List** (4-free_list.c):
    - C function that frees a list_t list.

6. **The Hare and the Tortoise** (100-first.c):
    - C function that prints "You're beat! and yet, you must allow,\nI bore my house upon my back!\n" before the main function is executed.

7. **Real Programmers Can Write Assembly Code in Any Language** (101-hello_holberton.asm):
    - A 64-bit assembly program that prints "Hello, Holberton" followed by a new line using only the `printf` function without interrupts.
