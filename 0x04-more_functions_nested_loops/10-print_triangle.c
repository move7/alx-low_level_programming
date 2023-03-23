#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 *@size: size of the triangle
 */
void print_triangle(int size)
{
	if (n < 0)
		_putchar('\n');
	else
	{
		for (i = 9 ; i > 0; i--)
		{
			for    (j = 0; j < 9; j++)
			{
				if (j < i)
					putchar(' ');
				else
					putchar('#');
			}
			putchar('\n');
		}
	}
}
