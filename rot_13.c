#include "main.h"

/**
 *rot_13 - ......
 *@args: .......
 *
 *Return: number
 */
int rot_13(va_list args)
{
	int i = 0, p = 26, n = 13;
	char *s = va_arg(args, char *);
	char x;

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			x = s[i] - 'a';
			x = 'a' + ((x + n) % p);
		}
		else if (s[i] >= 'A' && s[i] <= 'Z')
		{
			x = s[i] - 'A';
			x = 'A' + ((x + n) % p);
		}
		else
			x = s[i];
		write(1, &x, 1);
	}

	return (i);
}
