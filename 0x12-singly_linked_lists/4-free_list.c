#include "lists.h"
/**
 * free_list - free
 * @head: pointer
 */
void free_list(list_t *head)
{
	list_t *next, *node;

	node = head;
	while (node)
	{
		next = node->next;
	
		free(node);
		node = NULL;
		node = next;
	}

}
