#include "main.h"

/**
 * _memset - memory
 * @s: arguement
 * @b: charact
 * @n: digit
 * Return: a string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;

	return (s);
}
