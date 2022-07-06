#include <stdio.h>
/**
 *main - print a program that prints the alphabet in lowercase
 *Return: 0 once exited, otherwise nonzero
*/
int main(void)
{
int ch;
for (ch = 97; ch <= 122; ch++)
	putchar(ch);
putchar(10);
return (0);
}
