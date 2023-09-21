#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - this is singly linked list
 * @str: this is the string - (malloc'ed string)
 * @len: this is the length of the string
 * @next: this is the next node in the linklist 
 *
 * Description: this is the singley linklist project 
 * 
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif

