#include "main.h"

/**
 *print_reverse - ..
 *@args: ...
 *
 *Return: size
 */
int print_reverse(va_list args)
{
	int i = 0, l = 0;
	char *s = va_arg(args, char *);

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
		l++;
	for (i = l - 1; i >= 0; i--)
		write(1, &s[i], 1);
	return (l);
}
