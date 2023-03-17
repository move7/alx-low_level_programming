#include <stdlib.h>
#include <stdio.h>
/**
*main - main function
*Return: 0 success
*/
int main(void)
{
	int c, n;

	for (n = 48; n <= 57; n++)
	{
		for (c = n + 1; c <= 57; c++)
		{
			if (c != n)
			{
				putchar(n);
				putchar(c);
				if (c != 57 || n != 56)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

