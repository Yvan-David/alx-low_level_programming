#include <stdio.h>
/**
 * main - prints program that prints the numberz
 * Return: 0 once exited, otherwise non zero
 */
int main(void)
{
int ch;
for (ch = 48; ch <= 57; ch++)
	putchar(ch);
putchar(10);
return (0);
}
