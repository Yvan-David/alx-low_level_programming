#include <math.h>
#include <string.h>
#include "main.h"
unsigned int con_c_to_i(const char *b)
{
	int n = 0, var = 0;
	int s,c,plan;
	s = strlen(b);
	for(n = 0; n < s; n++)
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
