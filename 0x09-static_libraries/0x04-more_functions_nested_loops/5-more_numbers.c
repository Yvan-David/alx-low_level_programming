#include "main.h"

/**
 * more_numbers - prints digits
 */

void more_numbers(void)
{
	int x;
	int y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 15; y++)
		{
			_putchar(y);
		}
		_putchar('\n');
	}
}
