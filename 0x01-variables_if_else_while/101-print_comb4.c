#include <stdio.h>
int n;
int i;
int p;
int main()
{
	for (n = 48; n <= 57; n++)
	{
		for (i = 49; i <= 57; i++)
		{
			for (p = 50; p <= 57; p++)
			{
				if (i > n && p > i && p > n )
				{
					putchar(n);
					putchar(i);
					putchar(p);
					if (n != 55 || i != 56 || p != 57)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	return (0);
}
