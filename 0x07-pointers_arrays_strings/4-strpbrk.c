#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* _strpbrk - string char
* @s: argument
* @accept: char
* Return: string
*/
char *_strpbrk(char *s, char *accept)
{
int i, j;
unsigned int count = 0;
for (i = 0; *s != '\0'; i++)
{
for (j = 0; *accept != '\0'; j++)
{
if (*s == *accept)
{
return (s);
break;
}
accept++;
}
accept = accept - j;
s++;
}
return (NULL);
}
