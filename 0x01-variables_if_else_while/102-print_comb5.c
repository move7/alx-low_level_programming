#include <stdlib.h>
#include <stdio.h>
/**
*main - main function
*Return: 0 success
*/
int main(void)
{
	int i, j, m, f1, f2, l1, l2;

	for (i = 0; i < 100; i++)
	{
		for (j = 1; j < 100; j++)
		{
			if (i < j)
			{
				f1 = i / 10;
				l1 = i % 10;
				f2 = j / 10;
				l2 = j % 10;
				putchar(f1 + 48);
				putchar(l1 + 48);
				putchar(' ');
				putchar(f2 + 48);
				putchar(l2 + 48);
				if (i != 99 || j != 99)
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

