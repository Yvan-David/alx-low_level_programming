#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
* binary_search - search linearly
* @array: pointer to the first position
* @size: array size
* @value: value to search
* Return: -1 on failure
*/
int binary_search(int *array, size_t size, int value)
{
size_t l = 0;
size_t i;
size_t r = size - 1;
size_t mid = (l + r) / 2;
if (size == 0)
return (-1);
while (l < r)
{
printf("Searching in array: ");
for (i = l; i < r; i++)
{
printf("%d, ", array[i]);
}
printf("%d\n", array[r]);
if (value == array[mid])
return (mid);
else if (value < array[mid])
{
r = mid - 1;
mid = (l + r) / 2;
}
else
{
l = mid + 1;
mid = (l + r) / 2;
}
}
return (-1);
}
