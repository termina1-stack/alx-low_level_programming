#include "main.h"

/**
 * create_file - function to create file
 * @filename: pointer to file name
 * @text_content: text being written
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file, wfile, len, cfile;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
			continue;
		wfile = write(file, text_content, len);
	}

	if (wfile == -1)
		return (-1);

	cfile = close(file);

	/* Check if the file was closed successfully */
	if (cfile == -1)
		return (-1);

	return (1);
}
