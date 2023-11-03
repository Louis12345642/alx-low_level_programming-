#include "main.h"

/**
 * create_file - creating a file.
 * @filename: file name pointer.
 * @text_content: string pointer for writing.
 *
 * Return: incase of failure - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int x, z, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	x = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	z = write(x, text_content, l);

	if (x == -1 || z == -1)
		return (-1);

	close(x);

	return (1);
}
