#include <stdio.h>
/*
 *a program that prints the alphabet in lowercase reverse
 *main : always return 0
*/
int main(void)
{
int ch;
for (ch = 122; ch >= 97; ch--)
	putchar(ch);
putchar(10);
return (0);
}
