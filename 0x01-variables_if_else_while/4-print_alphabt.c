#include <stdio.h>
/*
 *a program that prints the alphabet in lowercase
 *main : always return 0
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
