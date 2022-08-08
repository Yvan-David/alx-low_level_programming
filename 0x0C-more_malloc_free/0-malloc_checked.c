#include "main.h"
#include <stdlib.h>

/**
 * malloc_cheked - cheking
 * @b: argument
 */
void *malloc_checked(unsigned int b)
{
	void *p;
	p = malloc(b);

	if (p == NULL)
		exit(98);
	return(p);
}
