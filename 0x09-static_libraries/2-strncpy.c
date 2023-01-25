#include "main.h"
#include <string.h>

/**
 * _strncpy - prints fx
 * @dest: argment
 * @src: argument
 * @n: argument
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
