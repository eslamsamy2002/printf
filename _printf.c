#include "main.h"

/**
 *_printf - a variadic function that prints formatted strings.
 *@format: input string
 *
 *Return: number of chars printed
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int i, charnum = 0, val = 0;

	if (format == NULL)
		return (-1);

	va_start(ap, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			charnum++;
		}
		else
		{
			val = 0;
			i++;

			val = take(format[i], ap);
			if (val < 0)
				return (-1);
			charnum += val;
		}
	}

	va_end(ap);
	return (charnum);
}
