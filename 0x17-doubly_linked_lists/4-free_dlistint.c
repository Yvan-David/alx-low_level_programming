#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_dlistint - free dlist
 * @head: pointer
 * Return: size dlist
 */
void free_dlistint(dlistint_t *head)
{
while (head != NULL)
{
head = head->prev;
free(head);
}
free(head);
}
