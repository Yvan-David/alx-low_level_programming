#include "main.h"

/**
 * _sqrt_recursion - sqroot
 * @n: argument
 * Return: number
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - square
 * @n: digit
 * @i: iterator
 * Return: digit
 */
int _sqrt(int n, int i)
{
	int square = i * i;

	if (square > n)
		return (-1);
	if (square == n)
		return (i);
	return (_sqrt(n, i + 1));
}
