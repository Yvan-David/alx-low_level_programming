#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - prints name from pointerfunctions
 * @name: string with address
 * @f: pointer function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
