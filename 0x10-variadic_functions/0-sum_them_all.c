#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int x, sum = 0;
	va_list values;
	va_start (values, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(values, int);
		sum += x;
	}
	va_end(values);
	return (sum);
}

