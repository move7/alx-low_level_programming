#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
	int len = strlen(argv[1]), i;
	unsigned char tmp1 = 0, tmp2 = 0, tmp3 = 0, tmp4 = 0, tmp5 = 0;

	codex = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	for (i = 0; i < len; i++)
	{
		tmp1 += argv[1][i];
		tmp2 ^= argv[1][i];
		tmp3 *= argv[1][i];
		if (argv[1][i] > tmp4)
			tmp4 = argv[1][i];
		tmp5 += (argv[1][i] * argv[1][i]);
	}

	srand(tmp4 ^ 14);

	password[0] = codex[(len ^ 59) & 63];
	password[1] = codex[(tmp2 ^ 79) & 63];
	password[2] = codex[(tmp3 ^ 85) & 63];
	password[3] = codex[rand() & 63];
	password[4] = codex[(tmp5 ^ 239) & 63];
	password[5] = codex[(rand() ^ 229) & 63];
	password[6] = '\0';

	printf("%s", password);
	return 0;
}

