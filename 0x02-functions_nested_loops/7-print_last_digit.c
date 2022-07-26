#include "main.h"
/**
 * print_last_digit - prints sign conversions
 * @n: is an argument
 * Return: last number
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = -n;
	n = n % 10;
	_putchar('0' + n);
	_putchar('\n');
	return (n);
}
