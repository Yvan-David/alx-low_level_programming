

#include "main.h"

/**
 * print_times_table - print times table n times
 * @n: number of times to print times table
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, k, l, m, n3;

	if (n < 0 || n > 15)
		return;

	i = 0;
	while (i <= n)
	{
		_putchar(0 + '0');
		j = 1;
		while (j <= n)
		{
			k = i * j;

			l = k / 100;
			if (l != 0)
				m = (k / 10) % 10;
			else
				m = k / 10;
			n3 = k % 10;

			_putchar(',');
			_putchar(' ');
			if (l != 0)
				_putchar(l + '0');
			else
				_putchar(' ');

			if (l != 0 || m != 0)
				_putchar(m + '0');
			else
				_putchar(' ');

			_putchar(n3 + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
