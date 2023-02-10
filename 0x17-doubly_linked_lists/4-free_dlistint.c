#include "lists.h"
/**
 * free_dlistint - frees a d_linked list
 * @head: a pointer to the d_linked list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
