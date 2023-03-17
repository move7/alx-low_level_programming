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
		for (n = m + 1; n <= 57; n++)
		{
			for (c = n + 1; c <= 57; c++)
			{
				putchar(m);
				putchar(n);
				putchar(c);
				if (m != 55 || n != 56 || c != 57)
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
