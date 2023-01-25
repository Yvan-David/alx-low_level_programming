#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strspn - string char
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
 // printf("%lu\n", strspn("hello, world", "dleh"));
  return (NULL);
 }
 #include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world";
    char *f = "world";
    char *t;

    t = _strpbrk(s, f);
    printf("%s\n", t);
    return (0);
}