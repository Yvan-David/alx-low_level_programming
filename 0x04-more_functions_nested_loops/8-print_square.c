#include "main.h"

/**
 * print_square - writes a square using #
 * @size: the width and height
 */

void print_square(int size)
{
	int w, h;

	if (size > 0)
	{
		for (h = 0; h < size; h++)
		{
			for (w = 0; w < size; w++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
