#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strncat - prints fx
 * @dest: argment
 * @src: argument
 * @n: argument
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;
if (n == 0)
return (NULL);
for (i = 0; dest[i] != '\0'; i++)
{

}
if (dest[i] == '\0')
{
j = i;
for (i = 0; src[i] != '\0'; i++)
{
dest[j] = src[i];
j++;
if ((i + 1) == n)
	break;
}
if (src[i] == '\0')
dest[j] = src[i];
}
return (dest);
}
