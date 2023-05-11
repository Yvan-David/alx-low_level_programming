#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
* linear_search - search linearly
* @array: pointer to the first position
* @size: array size
* @value: value to search
* Return: -1 on failure
*/
int linear_search(int *array, size_t size, int value)
{
size_t i;
if (size == 0)
return (-1);
for (i = 0; i < size; i++)
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
if (array[i] == value)
{
return (i);
}
}
if (i == size)
return (-1);
return (0);
}
