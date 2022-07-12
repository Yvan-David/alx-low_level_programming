#include "main.h"
/**
 * print_last_digit - prints sign conversions
 * @n: is an argument
 * Return: last number
 */
int print_last_digit(int n)
{
	int X = 0;

	if (n < 0)
		n = -n;
	X = n % 10;
	_putchar(X);
	return (X);
}
