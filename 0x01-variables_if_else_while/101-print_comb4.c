#include <stdio.h>
/**
 * main - prints numbers in ascending order
 * Return: 0 if exited properly, non zero otherwise
 */
int main(void)
{
int ch;
int n;
int p;
for (ch = 48; ch <= 57; ch++)
{
	for (n = 49; n <= 57; n++)
	{
		for (p = 50; p <= 57; p++)
		{
			if (p > ch)
			{
				if (p > n)
				{
					if (n > ch)
					{
						putchar(ch);
						putchar(n);
						putchar(p);
						if (ch != 55 || n != 56 || p != 57)
						{
							putchar(44);
							putchar(32);
						}	
					}
				}
			}
		}
	}
}
putchar(10);
return (0);
}
