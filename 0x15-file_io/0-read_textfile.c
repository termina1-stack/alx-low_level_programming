#include "main.h"

/**
 * read_textfile - reads text file and prints to the POSIX standard output
 * @filename: file pointer
 * @letters: size of letters
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file = 0, rfile = 0, wfile = 0, cfile;
	char *buf;

	buf = malloc(sizeof(char) * letters);

	if (buf == NULL || filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	rfile = read(file, buf, letters);
	wfile = write(STDOUT_FILENO, buf, rfile);

	if (file == -1 || rfile == -1 || wfile == -1)
		return (0);

	cfile = close(file);

	if (cfile == -1)
		return (0);

	free(buf);
	return (rfile);
}
