# 0x13. C - More singly linked lists
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
>___`0. Print list : `___ Write a function that prints all the elements of a listint_t list.
- Prototype: ___size_t print_listint(const listint_t *h);___.
- Return: the number of nodes.
- Format: see example.
- You are allowed to use ___printf___.

>___`1. List length : `___ Write a function that returns the number of elements in a linked listint_t list.
- Prototype: ___size_t listint_len(const listint_t *h);___.

>___`2. Add node : `___ Write a function that adds a new node at the beginning of a listint_t list.
- Prototype: ___listint_t *add_nodeint(listint_t **head, const int n);___.
- Return: the address of the new element, or ___NULL___ if it failed.

>___`3. Add node at the end : `___ Write a function that adds a new node at the end of a listint_t list.
- Prototype: ___listint_t *add_nodeint_end(listint_t **head, const int n);___.
- Return: the address of the new element, or ___NULL___ if it failed.

>___`4. Free list : `___ Write a function that frees a listint_t list.
- Prototype: ___void free_listint(listint_t *head);___.

>___`5. Free : `___ Write a function that frees a listint_t list.
- Prototype: ___void free_listint2(listint_t **head);___.
- The function sets the head to ___NULL___.

>___`6. Pop : `___ Write a function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).
- Prototype: ___int pop_listint(listint_t **head);___.
- if the linked list is empty return ___0___.

>___`7. Get node at index : `___ Write a function that returns the nth node of a listint_t linked list.
- Prototype: ___listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);___.
- where ___index___ is the index of the node, starting at ___0___.
- if the node does not exist, return ___NULL___.

>___`8. Sum list : `___ Write a function that returns the sum of all the data (n) of a listint_t linked list.
- Prototype: ___int sum_listint(listint_t *head);___.
- if the list is empty, return ___0___.

>___`9. Insert : `___ Write a function that inserts a new node at a given position.
- Prototype: ___listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);___.
- where ***idx*** is the index of the list where the new node should be added. Index starts at 0.
- Returns: the **address of the new node***, or ***NULL*** if it failed.
- if it is not possible to add the new node at index idx, do not add the new node and return ***NULL***.

>___`10. Delete at index : `___ Write a function that deletes the node at index index of a listint_t linked list.
- Prototype: int __delete_nodeint_at_index(listint_t **head, unsigned int index);__.
-  where ***index*** is the index of the node that should be deleted. Index starts at 0.
-  Returns: ***1*** if it succeeded, ***-1*** if it failed.
     
## dvanced tasks:


