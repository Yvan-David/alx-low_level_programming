#include "function_pointers.h"

/**
 * print_name - prints name from pointerfunctions
 * @name: string with address
 * @f: pointer function
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
