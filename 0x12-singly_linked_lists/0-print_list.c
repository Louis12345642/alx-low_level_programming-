#include <stdio.h>
#include "main.h"

/**
This print_list function prints all the number of nodes 
int the linklist
pointer *head: this is the head of the linklist
 */

size_t print_list(const list_t *head)
{
	size_t size = 0;

	while (head)
	{
		if (!head->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", head->len, head->str);
		head = head->next;
		size++;
	}

	return (size);
}

