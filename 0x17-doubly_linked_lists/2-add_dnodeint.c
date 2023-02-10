#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a d_linked list
 * @tmp: a pointer to the d_linked list
 * @n: a given integer of the new node
 *
 * Return: (Success) a pointer to the newly add node
 * ------- (Fail) return a NULL
 */
dlistint_t *add_dnodeint(dlistint_t **tmp, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (*tmp == NULL)
	{
		new_node->prev = NULL;
		new_node->next = NULL;
	}
	else
	{
		(*tmp)->prev = new_node;
		new_node->next = *tmp;
		new_node->prev = NULL;
	}
	*tmp = new_node;
	return (new_node);
}