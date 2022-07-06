#include <stdio.h>
/**
 *main - prints a program that prints the alphabet in lowercase
 *Return: 0
*/
int main(void)
{
int ch;
for (ch = 97; ch <= 122; ch++)
	putchar(ch);
for (ch = 65; ch <= 90; ch++)
	putchar(ch);
putchar(10);
return (0);
}
