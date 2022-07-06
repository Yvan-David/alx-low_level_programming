#include <stdio.h>
/**
 * main - prints a program that prints the alphabet in lowercase
 * Return: 0 once exited, otherwise nonzero
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
	if (ch != 'q' && ch != 'e')
		putchar(ch);
putchar(10);
return (0);
}
