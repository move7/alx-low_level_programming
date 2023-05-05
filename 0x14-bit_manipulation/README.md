# 0x14. C - Bit manipulation
## Requirements
- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the `Betty style`. It will be checked using `betty-style.pl` and `betty-doc.pl`
- No more than 5 functions per file
- The only C standard library functions allowed are `malloc`, `free` and `exit`. Any use of functions like `printf`, `put`s, `calloc`, `realloc` etc… is forbidden
- You are allowed to use `_putchar`
- You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `lists.h`

## Mandatory Tasks:
>___`0. 0 : `___ Write a function that converts a binary number to `an unsigned int`.
- Prototype: ___unsigned int binary_to_uint(const char *b);___.
- where b is pointing to a string of 0 and 1 chars.
- Return: the converted number, or 0 if.
     - there is one or more chars in the string b that is not 0 or 1.
     - b is NULL.

>___`1. 1 : `___ Write a function that prints the binary representation of a number.
- Prototype: ___void print_binary(unsigned long int n);___.
- You are not allowed to use arrays
- You are not allowed to use malloc
- You are not allowed to use the % or / operators

>___`2. 10 : `___ Write a function that returns the value of a bit at a given index.
- Prototype: ___int get_bit(unsigned long int n, unsigned int index);___.
- Index is the index, starting from 0 of the bit you want to get.
- Return: the value of the bit at index index or -1 if an error occured.

>___`3. 11 : `___ Write a function that sets the value of a bit to 1 at a given index.
- Prototype: ___int set_bit(unsigned long int *n, unsigned int index);___.
- Index is the index, starting from 0 of the bit you want to get.
- Return: 1 if it worked or -1 if an error occured.

>___`4. 100 : `___ Write a function that sets the value of a bit to 0 at a given index.
- Prototype: ___int clear_bit(unsigned long int *n, unsigned int index);___.
- Index is the index, starting from 0 of the bit you want to get.
- Return: 1 if it worked or -1 if an error occured.

>___`5. 101 : `___ Write a function that returns the number of bits you would need to flip to get from one number to another.
- Prototype: ___unsigned int flip_bits(unsigned long int n, unsigned long int m);___.
- TYou are not allowed to use the % or / operators.#0x00. C - Hello, World
