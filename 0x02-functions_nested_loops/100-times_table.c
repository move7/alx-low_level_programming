#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */
void print_times_table(int n)
{
	if (n < 15 && n > 0)
	{
		int i, j, k;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				if (k >= 10)
				{
					_putchar(' ');
					_putchar((k / 10) + '0');
				}
				else if (j > 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar((k % 10) + '0');
				if (j == n)
				{
					_putchar('\n');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
	}
}
