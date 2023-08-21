#include "main.h"

/**
 * print_strange - prints strange specifiers like %r
 * @c: printed functions - return characters number
 *
 * Return: characters number
 */
int strange_string(char c)
{
    char x = '%';

    if (c == '\0')
        return (-1);
    write(1, &x, 1);
    write(1, &c, 1);
    return (2);
}


/**
 * print_char - print chars.
 * @args: arguments
 *
 * Return: char
 */
int print_char(va_list p)
{
    char l = va_arg(p, int);

    return (write(1, &l, 1));
}

/**
 * print_str - print string.
 * @args: ...
 *
 * Return: length of string
 */
int print_string(va_list p)
{
    int i = 0;
    char *s = va_arg(p, char *);

    if (s == NULL)
        s = "(null)";
    for (i = 0; s[i] != '\0'; i++)
    {
        write(1, &s[i], 1);
    }
    return (i);
}



