#include "main.h"

/**
 * jack_bauer - prints hours
 */
void jack_bauer(void)
{
int ht = 0;
int h = 0;
int mt = 0;
int m = 0;

for (ht = 0; ht <= 2; ht++)
{
for (h = 0; h <= 9; h++)
{
for (mt = 0; mt <= 5; mt++)
{
for (m = 0; m <= 9; m++)
{
if ((ht == 2 && h == 4) || (ht == 2 && h == 5) ||  (ht == 2 && h == 6))
break;
else if ((ht == 2 && h == 7) || (ht == 2 && h == 8) || (ht == 2 && h == 9))
{
break;
}
_putchar(ht + '0');
_putchar(h + '0');
_putchar(':');
_putchar(mt + '0');
_putchar(m + '0');
_putchar('\n');

}
}
}
}
}
