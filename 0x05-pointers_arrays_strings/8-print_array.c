#include "main.h"
#include <stdio.h>

/**
 * print_array - prints array element
 * @a: array
 * @n: parameter
 */
void print_array(int *a, int n)
{
	int c;

	for (c = 0; c != n; c++)
	{
		if (c != 0)
			printf(", ");
		printf("%d", a[c]);
	}
	printf("\n");
}
int main(void)
{
    int array[5];

    array[0] = 98;
    array[1] = 402;
    array[2] = -198;
    array[3] = 298;
    array[4] = -1024;
    print_array(array, 5);
    return (0);
}