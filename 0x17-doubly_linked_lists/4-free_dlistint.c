#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

void free_dlistint(dlistint_t *head)
{
free(head);
}