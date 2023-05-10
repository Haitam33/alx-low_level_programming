#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 * @filename: Name of the file.
 * @letters: The number of letters to print.
 *
 * Return: The actual number of letters it could read and print
 *	if the file can not be opened or read, return 0
 *	if filename is NULL return 0
 *	if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int desc;
	ssize_t to_read, to_write;
	char *buffer;

	if (filename == NULL)
		return (0);

	desc = open(filename, O_RDONLY);
	if (desc == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	to_read = read(desc, buffer, letters);
	if (to_read == -1)
	{
		free(buffer);
		close(desc);
		return (0);
	}

	to_write = write(STDOUT_FILENO, buffer, to_read);
	if (to_write == -1)
	{
		free(buffer);
		close(desc);
		return (0);
	}
	close(desc);
	return (to_read);
}
