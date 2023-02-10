#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data
 * @tmp: a pointer to the linked list
 *
 * Return: (Success) return an integer
 * ------- (Fail) return 0
 */
int sum_dlistint(dlistint_t *tmp)
{
	int sum = 0;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
