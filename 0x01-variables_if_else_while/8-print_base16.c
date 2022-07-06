#include <stdio.h>
/**
 * main - prints program that prints the alphabet in lowercase base sixteen
 * Return: 0 once exited, otherwise nonzero
 */
int main(void)
{
int ch;
for (ch = 48; ch <= 57; ch++)
	putchar(ch);
for (ch = 97; ch <= 102; ch++)
	putchar(ch);
putchar(10);
return (0);
}
