#include "main.h"

/**
 * print_triangle - uses # and space to print a triangle on the screen
 * @size: the number of lines the triangle should be tall
 */

void print_triangle(int size)
{
int b, i;
int h;

for (b = size - 1; b >= 0; b--)
{
for (i = b; i > 0; i--)
_putchar(' ');
for (h = 1; h <= (size - b); h++)
_putchar('#');
_putchar('\n');
}

if (size <= 0)
_putchar ('\n');

}
