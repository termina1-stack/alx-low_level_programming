#include "main.h"

/**
 * append_text_to_file - appends text at end of file
 * @filename: pointer to file
 * @text_content: NULL terminated string
 * Return: 1 if success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, wfile, cfile, i;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_APPEND | O_WRONLY);

	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			continue;

		wfile = write(file, text_content, i);
	}

	if (wfile == -1)
		return (-1);

	cfile = close(file);

	if (cfile == -1)
		return (-1);

	return (1);
}
