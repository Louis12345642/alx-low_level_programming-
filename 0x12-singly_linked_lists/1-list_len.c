
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - this returns the number of elements in a linked list
 * @h: this is a pointerpointer to the list_t list
 *
 * Return: this returns the number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}
	return (number);
}

