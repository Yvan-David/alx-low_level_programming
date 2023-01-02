#include "main.h"
#include <stdio.h>

/**
* print_array - prints array element
* @a: array
* @n: parameter
*/
void print_array(int *a, int n)
{
int c = 0;
if (c < n)
{
for (c = 0; c != n; c++)
{
if (c != 0)
printf(", ");
printf("%d", a[c]);
}
printf("\n");
}
}
