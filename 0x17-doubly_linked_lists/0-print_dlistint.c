#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - print dlist
 * @h: pointer
 * Return: size dlist
 */
size_t print_dlistint(const dlistint_t *h)
{
int c = 0;
const dlistint_t *tmp = h;
if (h == NULL)
{
return (0);
}
while (tmp->next != NULL)
{
printf("%d\n", tmp->n);
tmp = tmp->next;
c++;
}
printf("%d\n", tmp->n);
return (c + 1);
}
