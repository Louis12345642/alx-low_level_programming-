#include "main.h"
/**
 * _puts_recursion - function like puts();
 * @s: input
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	if (*string)
	{
		_putchar(*string);
		_puts_recursion(string + 1);
	}

	else
		_putchar('\n');
}


