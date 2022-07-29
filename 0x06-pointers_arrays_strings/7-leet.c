#include "main.h"

/**
 * leet - function
 * @x: argument
 * Return: string
 */
char *leet(char *x)
{
	int a = 0, b, l = 5;
	char tr[5] = {'A', 'E', 'O', 'T', 'L'};
	char tn[5] = {'4', '3', '0', '7', '1'};

	while (x[a])
	{
		b = 0;
		while (b < l)
		{
			if (x[a] == tr[b] || x[a] - 32 == tr[b])
				x[a] = tn[b];
			b++;
		}
		a++;
	}
	return (x);
}
