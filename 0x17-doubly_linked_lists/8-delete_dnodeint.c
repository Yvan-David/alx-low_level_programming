#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at a given index
 * @head: a pointer to the linked list
 * @index: the given index
 *
 * Return: (Success) return 1
 * ------- (Fail) return -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int count = 1;

	if (!head)
	{
		return (-1);
	}
	tmp = *head;
	if (index == 0)
	{
		if (!tmp)
		{
			return (-1);
		}
		*head = tmp->next;
		if (*head)
		{
			(*head)->prev = NULL;
		}
		free(tmp);
		return (1);
	}
	while (tmp)
	{
		if ((count - 1) == index)
		{
			if (tmp->next)
			{
				tmp->prev->next = tmp->next;
				tmp->next->prev = tmp->prev;
			}
			else
				tmp->prev->next = NULL;
			free(tmp);
			return (1);
		}
		count++;
		tmp = tmp->next;
	}
	return (-1);
}
