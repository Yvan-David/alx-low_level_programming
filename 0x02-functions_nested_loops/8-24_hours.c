#include "main.h"

void jack_bauer(void)
{
	int ht = 0;
	int h = 0;
	int mt = 0;
	int m = 0;

	for (ht = 0; ht <= 2; ht++)
	{
		for (mt = 0; mt <= 5; mt++)
		{
			for (m = 0; m <= 9; m++)
			{
				if (ht == 2 && h == 4 || ht == 2 && h == 5 ||  ht == 2 && h == 6 || ht == 2 && h == 7 || ht == 2 && h == 8 || ht == 2 && h == 9)
				{
					break;
				}
				_putchar(ht);
				_putchar(h);
				_putchar(':');
				_putchar(mt);
				_putchar(m);
				_putchar('\n');

			}
		}
	}
}
