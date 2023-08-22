#include "main.h"

/**
 *reverse_binary - reverse string
 *@s: string to reverse
 *Return: in right case return  1.
 *in case of fault, it return -1.
 */

char *reverse_binary(char *s)
{
	int length = 0, start;
	char temp;
	char *copyed_s;

	while (s[length] != '\0')
		length++;

	copyed_s = malloc(sizeof(char) * length + 1);
	if (copyed_s == NULL)
		return (NULL);

	copy_string(copyed_s, s, length);
	for (start = 0; start < length; start++, length--)
	{
		temp = copyed_s[length - 1];
		copyed_s[length - 1] = copyed_s[start];
		copyed_s[start] = temp;
	}

	free(copyed_s);
	return (copyed_s);

}

/**
 * copy_string - copy memory area
 * @copyed_s: Destination for copying
 * @str: Destination for copying
 * @n: The number of bytes to copy
 * Return: The copy_string function returns a pointer to copyed_s.
 */

char *copy_string(char *copyed_s, char *str, unsigned int n)
{
	unsigned int i;

	for (i = 0; str[i] != '\0'; i++)
		copyed_s[i] = str[i];
	copyed_s[i] = '\0';
	return (copyed_s);
}

/**
 *length_of_base - Calculates the length for an decimal number
 *@num: The number for which the length is being calculated
 *@base: Base to be calculated by
 *Return: An integer representing the length of a number
 */

unsigned int length_of_base(unsigned int num, int base)
{
	unsigned int i;

	for (i = 0; num > 0; i++)
	{
		num /= base;
	}

	return (i);
}

/**
 *printing_base - sends characters to be written on standard output
 *@str: String to parse
 */
void printing_base(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
}
