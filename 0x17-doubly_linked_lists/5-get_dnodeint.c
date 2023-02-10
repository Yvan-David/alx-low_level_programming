#include "lists.h"

/**
 * get_dnodeint_at_index - return the nth node of linked list
 * @head: a pointer to the linked list
 * @index: the given index
 *
 * Return: (Success) a pointer to the nth node
 * ------- (Fail) return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int count = 0;

	tmp = head;
	while (tmp)
	{
		if (count == index)
			return (tmp);
		count++;
		tmp = tmp->next;
	}
	return (NULL);
}
