#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint - add node
 * @n: variable
 * @head: double pointer
 * Return: size dlist
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new, *tmp = NULL;
new = (malloc(sizeof(dlistint_t)));
if (new == NULL)
{
printf("error");
return (tmp);
}
if (*head == NULL)
{
new->n = n;
new->prev = *head;
*head = new;
tmp = new;
new->next = NULL;
}
new->n = n;
tmp->next = new;
new->prev = tmp;
new->next = NULL;
tmp = new;
return (tmp);
}
