#include "function_pointers.h"

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, s;

	for (i = 0; i < size; i++)
	{
		s = cmp(*(array + i));
		if (s != 0)
			return (i);
	}
	if (s == 0 || size <= 0)
		return (-1);
	return (0);
}
