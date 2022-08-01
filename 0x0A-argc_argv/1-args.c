#include <stdio.h>

/**
 * main - io function
 * @argc: parameter
 * @argv: array
 * Return: 0 always
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
