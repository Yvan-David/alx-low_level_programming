#include "main.h"
/**
 * print_last_digit - prints sign conversions
 * @n: is an argument
 * Return: last number
 */
int print_last_digit(int n)
{
	int x;

	if (n < 0)
		n = -n;
	x = n % 10;
	_putchar(x + '0');
	return (x);
}
