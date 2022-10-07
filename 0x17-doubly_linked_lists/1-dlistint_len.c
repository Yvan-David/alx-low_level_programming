#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - print dlist
 * @h: pointer
 * Return: size dlist
 */
size_t dlistint_len(const dlistint_t *h)
{
int c = 0;
const dlistint_t *tmp = h;
if (h == NULL)
{
return (0);
}
while (tmp->next != NULL)
{
tmp = tmp->next;
c++;
}
return (c + 1);
}
