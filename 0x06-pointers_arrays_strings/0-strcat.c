#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strcat -> prints function
 * @dest: argument one
 * @src: argument two
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
