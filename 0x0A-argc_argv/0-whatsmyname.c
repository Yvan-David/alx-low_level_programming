#include <stdio.h>

/**
 * main - io function
 * @argc: parameter
 * @argv: array
 * Return: 0 always
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
