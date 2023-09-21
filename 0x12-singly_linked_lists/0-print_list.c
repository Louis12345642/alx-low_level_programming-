#include <stdio.h>
#include "main.h"

/**
 * print_list - this function print nodes of a linked list
 * @h: is pointer to the list_t list to print of the link_list
 *
 * Return: the  function returns the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		size++;
	}

	return (size);
}

