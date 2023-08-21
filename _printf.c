#include "main.h"

/**
 *_printf - print formatted string
 *@format: format all type of normal and strange characters
 *
 *Return: length of the formatted output string
 */
int _printf(const char *format, ...)
{
	va_list list;
	int i;

	int charnum = 0;

	va_start(list, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			charnum++;
		}
		else
		{
			int val = 0;
			i++;
			if (format[i] != '%')
			{
				write(1, &format[i], 1);
				charnum++;
			}

			val = take(format[i], list);
			/*Negative error in failures */
			if (val < 0)
				return (-1);
			charnum += val;
		}
	}

	va_end(list);
	return (charnum);

}
