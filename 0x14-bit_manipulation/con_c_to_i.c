#include <math.h>
#include <string.h>
#include "main.h"
unsigned int con_c_to_i(const char *b)
{
	int n = 0, var = 0,c,plan;
	for(n = 0; n < strlen(b); n++)
	{
		if ( '1' == (*(b + n)))
			plan = ((plan* 10) + 1);
		if ('0' == (*(b + n)))
			plan = (plan*10);
		if (*(b + n) != '0' && *(b + n) != '1')
			return(0);
	}
	return(plan);
}
