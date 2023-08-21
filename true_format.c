#include "main.h"

/**
 *take - pickup the appropriate function .
 *@m: print char
 *@p: created list
 *
 *Return: v
 */
int take(char m, va_list p)
{
	int v = -1;

	if (m == 'c')
		v = print_char(p);
	else if (m == 's')
		v = print_string(p);
	else
		v = strange_string(m);

	return (v);
}
