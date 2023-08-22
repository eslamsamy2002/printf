#include "main.h"

/**
 *convert_binary - Converts a number from base 10 to binary
 *@list: List of arguments passed to this function
 *Return: The length of the number printed
 */

int convert_binary(va_list list)
{
	unsigned int n;
	int i, length;
	char *str;
	char *rev_string;

	n = va_arg(list, unsigned int);
	if (n == 0)
		return (_putchar('0'));
	else if (n < 0)
		return (-1);

	length = length_of_base(n, 2);
	str = malloc(sizeof(char) * length + 1);
	if (str == NULL)
		return (-1);

	for (i = 0; n > 0; i++)
	{
		if (n % 2 == 0)
			str[i] = '0';
		else
			str[i] = '1';
		n = n / 2;
	}

	str[i] = '\0';
	rev_string = reverse_binary(str);

	if (rev_string == NULL)
		return (-1);

	printing_base(rev_string);
	free(str);
	free(rev_string);
	return (length);

}
