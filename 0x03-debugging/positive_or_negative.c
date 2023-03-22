#include "main.h"
/**
*main - this function return if a number is negative or positive or zero
*Return: 0 success
*/
void positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else
		if (n < 0)
			printf("%d is negative\n", n);
		else
			printf("%d is zero\n", n);
}
