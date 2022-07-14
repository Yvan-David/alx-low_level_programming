#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - print a random number to the variable n each time it is executed
* Return: 0 once exited, otherwise return non zero
*/
void positive_or_negative(int i)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
	printf("%d is positive\n", n);
}
if (n == 0)
{
	printf("%d is zero\n", n);
}
if (n < 0)
{
	printf("%d is negative\n", n);
}
return (0);
}
/**
 * debugging - example return zero
 * Return : 0
 */
int main(void)
{
	int i;

	i = 0;
	positive_or_negative(i);

	return (0);
}
