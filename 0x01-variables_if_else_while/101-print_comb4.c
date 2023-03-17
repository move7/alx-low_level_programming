#include <stdlib.h>
#include <stdio.h>
/**
*main - main function
*Return: 0 success
*/
int main(void)
{
	int c, n, m;

	for (m = 48; m <= 57; m++)
	{
		for (n = 48; n <= 57; n++)
		{
			for (c = 48; c <= 57; c++)
			{
				putchar(m);
				putchar(n);
				putchar(c);
				if (c != 57 || n != 57 || m != 57)
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

