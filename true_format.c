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
	int n = -1;

	switch (m)
	{
		case 'd':
		case 'i':
			n = print_int(p);
			break;
		case '%':
			n = print_percent(1);
			break;
		case 'c':
			n = print_char(p);
			break;
		case 's':
			n = print_string(p);
			break;

		case 'b':
			n = print_binary(p);
			break;
		case 'r':
			n = print_reverse(p);
			break;
		case 'R':
			n = rot_13(p);
			break;
		default:
			n = strange_string(m);
	}

	return (n);
}

