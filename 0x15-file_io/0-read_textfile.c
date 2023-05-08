#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text and print it to STDOUT.
 * @filename: text file
 * @letters: number of letters to be read
 * Return: actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file, text, nbytes;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	text = read(file, buffer, letters);
	nbytes = write(STDOUT_FILENO, buffer, text);
	free(buffer);
	close(file);
	return (nbytes);
}
