#include "main.h"
#include <stdio.h>
/**
 * _strchr - string char
 * @s: argument
 * @c: char
 * Return: string
 */
char *_strchr(char *s, char c)
{
	int b;

	for (b = 0; *s != '0'; b++)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (*s == '\0')
		return (NULL);
}
