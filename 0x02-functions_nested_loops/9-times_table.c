#include "main.h"
/**
 * times_table - print multiplication
 */
void times_table(void)
{
	int i, j, c;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			c = i * j;
			if (c / 10 != 0)
				_putchar('0' + (c / 10));

			if (j != 9)
			{
				_putchar('0' + (c % 10));
				_putchar(',');
				_putchar(' ');
				if (c < 10)
					_putchar(' ');
			}
			else if (j == 9)
			{
				_putchar('0' + (c % 10));
				_putchar('\n');
			}
		}
	}
}
