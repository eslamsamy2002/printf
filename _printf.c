#include "main.h"
/**
* _printf - is a function that selects the correct function to print.
* @format: format string containing the characters and the specifiers*
* Return: number of the printed chars
*/
int _printf(const char *format, ...)
{  int char_num = 0;
    va_list list;

  if (format == NULL)
      return (-1);
  if (!format || (format[0] == '%' && !format[1]))
      return (-1);
  if (format[0] == '%' && format[1] == ' ' && !format[2])
      return (-1);

va_start(list, format);
while (*format)
{
    if (*format != '%')
    {
            write(1, format, 1);
            char_num++;
    }
    else
    {
            format++;
            if (*format == '\0')
            {
                break;
            }

if (*format == '%')
{
write(1, format, 1);
char_num++;
}
else if (*format == 'c')
{
char c = va_arg(list, int);

write(1, &c, 1);
char_num++;
}
else if (*format == 's')
{
   char *str = va_arg(list, char *);

   write(1, str, strlen(str));
   char_num += strlen(str);
}
}
format++;
} va_end(list);
return (char_num);
}
