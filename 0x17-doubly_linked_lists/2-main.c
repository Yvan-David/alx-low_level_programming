#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
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
//*head = new;
//new->prev = *head; // neezx
/*tmp->prev = new;
new->next = tmp;
new->prev = NULL;
*head = new;
tmp = new;
free(new);*/
new->n = n;
(*head)->prev = new;
new->next = NULL;
new->prev = *head;
*head = new;
return (*head);
}
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
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint(&head, 0);
    add_dnodeint(&head, 1);
    add_dnodeint(&head, 2);
    add_dnodeint(&head, 3);
    add_dnodeint(&head, 4);
    add_dnodeint(&head, 98);
    add_dnodeint(&head, 402);
    add_dnodeint(&head, 1024);
    print_dlistint(head);
    return (EXIT_SUCCESS);
}