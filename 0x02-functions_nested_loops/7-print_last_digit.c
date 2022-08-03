#include "main.h"
/**
 * print_last_digit - prints sign conversions
 * @n: is an argument
 * Return: last number
 */
int print_last_digit(int n)
{
	int d;

	d = n % 10;

	if (d < 0)
	{
		d = -d;
	}
	_putchar(d + '0');
	return (d);
}
