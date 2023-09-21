#include <stdio.h>
#include "lists.h"

/**
 * print_list function prints al the members of a linklist
 * we are using h as pointer to list_t
 *
 * This function returns the number of node in a linklist
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
i
