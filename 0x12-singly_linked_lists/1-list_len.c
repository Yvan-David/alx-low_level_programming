#include "lists.h"
/**
 * list_len - find
 * @h: pointer
 * Return: the length
 */
size_t list_len(const list_t *h)
{
	int i;

	i = 0;
	while(h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
