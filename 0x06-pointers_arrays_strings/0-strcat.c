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
int i, j;
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
}
if (src[i] == '\0')
dest[j] = src[i];
}
return (dest);
}
