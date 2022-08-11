#include "main.h"

/**
 * print_array - prints array element
 */
void print_array(int *a, int n)
{
	int c;

	for (c = 0; c != n; c++)
	{
		printf ("%d, ", a[c]);
	}	
}
