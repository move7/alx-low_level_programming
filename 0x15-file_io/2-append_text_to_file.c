#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, text, size = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
		for (size = 0; text_content[size];)
			size++;

	file = open(filename, O_WRONLY | O_APPEND);
	text = write(file, text_content, size);

	if (file == -1 || text == -1)
		return (-1);

	close(file);

	return (1);
}
