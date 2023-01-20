#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverse an aray
 * @n: an array
 * @a: argument
 */
void reverse_array(int *a, int n)
{
	int *p, i, dav, k;

	p = a;
	for (i = 0; i < (n - 1); i++)
		p++;
	for (k = 0; k < (n / 2); k++)
	{
		dav = a[k];
		a[k] = *p;
		*p = dav;
		p--;
	}
}
