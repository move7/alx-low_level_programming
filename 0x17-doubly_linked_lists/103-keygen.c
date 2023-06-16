#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Generates and prints passwords for the crackme5 executable.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char password[7], *codex;
	int len = strlen(argv[1]), i, tmp2 = 1, tmp1 = 0, tmp3 = 0, tmp4 = 0, tmp5;

	codex = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	for (i = 0; i < len; i++)
	{
		tmp1 += argv[1][i];
		tmp2 *= argv[1][i];
		tmp4 += (argv[1][i] * argv[1][i]);
		if (argv[1][i] > tmp3)
			tmp3 = argv[1][i];
	}
	for (i = 0; i < argv[1][0]; i++)
		tmp5 = rand();
	password[0] = codex[(len ^ 59) & 63];
	password[1] = codex[(tmp1 ^ 79) & 63];
	password[2] = codex[(tmp2 ^ 85) & 63];
	srand(tmp3 ^ 14);
	password[3] = codex[rand() & 63];
	password[4] = codex[(tmp4 ^ 239) & 63];
	password[5] = codex[(tmp5 ^ 229) & 63];
	password[6] = '\0';
	printf("%s", password);
	return (0);
}

