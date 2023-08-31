#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *str)
{
	int len = 0;

	if (*str)
	{
		len++;
		len += _strlen_recursion(str + 1);
	}

	return (len);
}



