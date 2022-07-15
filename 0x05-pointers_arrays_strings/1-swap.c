#include "main.h"

/**
 * swap_int - swap data
 * @a: parameter
 * @b: argument
 */
void swap_int(int *a, int *b)
{
	int dav;

	dav = *a;
	*a = *b;
	*b = dav;
}
