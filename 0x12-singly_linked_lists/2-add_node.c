#include "lists.h"
/**
 * add_node - add
 * @head: pointer
 * @str: pointerto
 * Return: address
 */
list_t *add_node(list_t **head, const char *str)
{
	size_t i;
	char *s = strdup(str);
	list_t *list = malloc(sizeof(list_t));

	if (!list)
		return (NULL);
	if (str)
		s = strdup(str), i = strlen(str);

	list->str = s;
	list->len = i;
	list->next = *head;

	*head = list;
	return (*head);
}
