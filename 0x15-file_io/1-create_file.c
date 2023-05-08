#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to be created.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int file, text, size = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (size = 0; text_content[size];)
			size++;
	}
	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	text = write(file, text_content, size);

	if (file == -1 || text == -1)
		return (-1);

	close(file);
	return (1);
}

