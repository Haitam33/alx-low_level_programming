#include "main.h"

/**
 * create_file - creates a file.
 * @filename: Name of the file to read
 * @text_content: A NULL terminated string to write to the file.
 * Return: 1 on sucess, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int desc, to_write, s = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (desc < 0)
		return (-1);
	if (text_content)
	{
		while (text_content[s])
			s++;
		to_write = write(desc, text_content, s);
		if (to_write != s)
			return (-1);
	}

	close(desc);

	return (1);
}
