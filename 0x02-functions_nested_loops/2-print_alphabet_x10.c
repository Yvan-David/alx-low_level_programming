#include "main.h"
/**
 * print_alphabet_x10 -> prints the 10 lowercase
 */
void print_alphabet_x10(void)

{
	int d;
	int n;

	for (n = 0; n < 10; n++)

	{
		for (d = 'a'; d <= 'z'; d++)
		{
			_putchar(d);
		}
		_putchar('\n');
	}
}
