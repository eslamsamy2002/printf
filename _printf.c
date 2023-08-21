#include "main.h"

/**
 *_printf - print formatted string
 *@format: format all type of normal and strange characters
 *
 *Return: length of the formatted output string
 */
int _printf(const char *format, ...)
{
	const char *p;
	va_list list;

	int charnum = 0;

	va_start(list, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (p = format; *p; p++)
	{
		if (*p == '%')
		{
			p++;
			if (*p == '%')
			{
				write(1, &p, 1);
				charnum++;
			}
		}
		else
		{
			p++;

			int result = take(*p, list);

			if (result < 0)
				return (-1);
			charnum += result;
		}
	}

	va_end(list);
	return (charnum);

}
