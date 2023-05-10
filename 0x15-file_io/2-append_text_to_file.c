#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int desc, to_write, s = 0;

	if (!filename)
		return (-1);

	desc = open(filename, O_WRONLY | O_APPEND);
	if (desc < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[s])
			s++;
		to_write = write(fd, text_content, s);
		if (to_write != s)
			return (-1);
	}

	close(desc);

	return (1);
}
