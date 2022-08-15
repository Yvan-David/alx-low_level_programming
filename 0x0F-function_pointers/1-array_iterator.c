#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - prints hex and dec numbers
 * @array: arrays
 * @size: array size
 * @action: pointer function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action != NULL)
	{
		int i;

		for (i = 0; i < 5; i++)
			action(*(array + i));
	}
}
