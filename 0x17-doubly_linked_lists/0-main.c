#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 * 
 * Return: Always 0.
 */
 size_t print_dlistint(const dlistint_t *h)
{
    int c = 0;
   const dlistint_t* tmp = h;
    while (tmp -> next != NULL)
    {
        printf("%d\n",tmp -> n);
        tmp = tmp -> next;
        c++;
    }
    return (c);
}

int main(void)
{
    dlistint_t *head;
    dlistint_t *new;
    dlistint_t hello = {8, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new -> n = 9;
    new -> next = head;
    head = new;
    n = print_dlistint(head);
    printf("-> %lu elements\n", n);
    free(new);
    return (0);
}