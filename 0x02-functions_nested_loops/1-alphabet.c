#include "main.h"
/**
*main - prints the alphabet, in lowercase, followed by a new line.
*Return: 0 success
*/
void print_alphabet(void)
{
  int i;
for(i=97; i<=122; i++){
  _putchar(i);
}
_putchar('\n');
return (0);
}
