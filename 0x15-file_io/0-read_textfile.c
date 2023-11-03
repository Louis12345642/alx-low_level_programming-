#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - this function read the text.
 * @filename: this is a pointer to the name.
 * @letters: The number of letters the
 *           the function should return.
 *
 * Return: checking if the file name is null.
 *         the actual number of bite to be read.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t x, y, z;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	x = open(filename, O_RDONLY);
	y = read(o, buffer, letters);
	z = write(STDOUT_FILENO, buffer, r);

	if (x == -1 || y == -1 || z == -1 || z != x)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (z);
}
