#include "main.h"

/**
 * append_text_to_file - apending text to s file.
 * @filename: file name pointer.
 * @text_content: string at the end of the file.
 *
 * Return: incase of file failuere - -1.
 *         incase the file not exiting locked the permission - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a, b, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	a = open(filename, O_WRONLY | O_APPEND);
	b = write(a, text_content, l);

	if (a == -1 || b == -1)
		return (-1);

	close(a);

	return (1);
}
