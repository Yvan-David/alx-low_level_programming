#include "main.h"
#include <math.h>
#include <string.h>
unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
		return(0);
	int n = 0, var = 0;
	int c;
	int y,s;
	s = strlen(b);
	y = con_c_to_i(b);
	for(n = 0; n < s; n++)
	{
		c = (y % 10);
		if (c == 1)
			var += ((1*(pow(2,n))));
		y= y/10;	
	}
	return (var);
}
