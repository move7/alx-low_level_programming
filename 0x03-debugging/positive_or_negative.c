#include "main.h"
/**
* positive_or_negative - tests function that
* prints if integer is positive or negative
* @n: parameter
* Return: 0
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
