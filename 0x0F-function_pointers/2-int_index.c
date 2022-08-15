#include "function_pointers.h"

/**
 * int_index - searchea for 98
 * @array: array
 * @size: array size
 * @cmp: pointer functino
 * Return: 0, otherwise program tells you
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, s;

	if (cmp != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			s = cmp(*(array + i));
			if (s != 0)
				return (i);
		}
		if (s == 0 || size <= 0)
			return (-1);
	}
	return (0);
}
