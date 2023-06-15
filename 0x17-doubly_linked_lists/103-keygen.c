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
	int len = strlen(argv[1]), i, tmp;

	codex = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	for (i = 0; i < len; i++)
	{
		tmp += argv[1][i];
		tmp *= argv[1][i];
	}
	srand((argv[1][len - 1] ^ 14) + (tmp ^ 239));
	password[0] = codex[(len ^ 59) & 63];
	password[1] = codex[(tmp ^ 79) & 63];
	password[2] = codex[(tmp ^ 85) & 63];
	password[3] = codex[rand() & 63];
	password[4] = codex[(tmp ^ 239) & 63];
	password[5] = codex[(rand() ^ 229) & 63];
	password[6] = '\0';
	printf("%s", password);
	return 0;
}
