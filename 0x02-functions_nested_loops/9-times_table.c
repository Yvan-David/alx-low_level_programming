#include "main.h"

/**
 * times_table - prints times table
 */
void times_table(void)
{
	int n = 0 , a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, i = 0, j = 0;

	for (n = 0; n <= 9; n++)
	{
		_putchar(a + '0');
		_putchar(',');
		if (b <= 9)
		{
			_putchar('.');
			_putchar('.');
			_putchar(b + '0');
			_putchar(',');
		}
		else
		{
			_putchar('.');
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
			_putchar(',');
		}
		if (c <= 9)
		{
			_putchar('.');
			_putchar('.');
			_putchar(c + '0');
			_putchar(',');
		}
		else
		{
			_putchar('.');
			_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
			_putchar(',');
		}
		if (d <= 9)
		{
			_putchar('.');
			_putchar('.');
			_putchar(d + '0');
			_putchar(',');
		}
		else
		{
			_putchar('.');
			_putchar((d / 10) + '0');
			_putchar((d % 10) + '0');
			_putchar(',');
		}
		if (e <= 9)
		{
			_putchar('.');
			_putchar('.');
			_putchar(e + '0');
			_putchar(',');
		}
		else
		{
			_putchar('.');
			_putchar((e / 10) + '0');
			_putchar((e % 10) + '0');
			_putchar(',');
		}
		if (f <= 9)
		{
			_putchar('.');
			_putchar('.');
			_putchar(f + '0');
			_putchar(',');
		}
		else
		{
			_putchar('.');
			_putchar((f / 10) + '0');
			_putchar((f % 10) + '0');
			_putchar(',');
		}
		if (g <= 9)
		{
			_putchar('.');
			_putchar('.');
			_putchar(g + '0');
			_putchar(',');
		}
		else
		{
			_putchar('.');
			_putchar((g / 10) + '0');
			_putchar((g % 10) + '0');
			_putchar(',');
		}
		if (h <= 9)
		{
			_putchar('.');
			_putchar('.');
			_putchar(h + '0');
			_putchar(',');
		}
		else
		{
			_putchar('.');
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(',');
		}
		if (i <= 9)
		{
			_putchar('.');
			_putchar('.');
			_putchar(i + '0');
			_putchar(',');
		}
		else
		{
			_putchar('.');
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(',');
		}
		if (j <= 9)
		{
			_putchar('.');
			_putchar('.');
			_putchar(j + '0');
		}
		else
		{
			_putchar('.');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
		a = a + 0;
		b = b + 1;
		c = c + 2;
		d = d + 3;
		e = e + 4;
		f = f + 5;
		g = g + 6;
		h = h + 7;
		i = i + 8;
		j = j + 9;
	}
}
