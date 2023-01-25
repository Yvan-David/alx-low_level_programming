#include "main.h"
#include <stdio.h>

/**
* print_diagsums - print matrix diagonal
* @size: array size
* @a: two D array
*/

void print_diagsums(int *a, int size)
{
int i, j, c = 0, d = 0;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
c += *(a + j + i + (size * i));
d += *(a + (size - 1) - i + (size * i));
break;

}
}
printf("%d, %d\n", c, d);
}
