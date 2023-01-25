#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* _strspn - string char
* @s: argument
* @accept: char
* Return: string
*/
unsigned int _strspn(char *s, char *accept)
{
int i, j;
unsigned int count = 0;
for (i = 0; *accept != '\0'; i++)
{
for (j = 0; *s != '\0'; j++)
{
if (*s == *accept)
{
count = count + 1;
break;
}
s++;
}
s = s - j;
accept++;
}
printf("%lu\n", strspn("hello, world", "dleh"));
return (count + 1);
}
