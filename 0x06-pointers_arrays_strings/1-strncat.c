#include "main.h"
#include <string.h>

/**
 * _strncat - prints fx
 * @dest: argment
 * @src: argument
 * @n: argument
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
