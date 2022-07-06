#include <stdio.h>
/**
 * main - prints a program that prints the alphabet in lowercase reverse
 * Return: 0 once exited, otherwise nonzero
 */
int main(void)
{
int ch;
for (ch = 122; ch >= 97; ch--)
	putchar(ch);
putchar(10);
return (0);
}
