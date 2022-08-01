#include <stdio.h>

/**
 * main - io function
 * @argc: parameter
 * @argv: array
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int i, result, p;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	i = atoi(argv[1]);
	p = atoi(argv[2]);
	result = i * p;

	printf("%d\n", result);
	return (0);
}
