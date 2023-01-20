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
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strncat(s1, s2, 1);
    printf("%s\n", s1);
    printf("%s", s2);
    printf("%s\n", ptr);
    ptr = _strncat(s1, s2, 1024);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}