#include "main.h"

/**
 * print_int - ....
 * @arg: ....
 * Return: numbers of characters.
 */

int print_int(va_list arg)
{
     int n = va_arg(arg, int), divisor, length;
     unsigned int n1;

    divisor = 1;
    length = 0;

    if (n < 0)
    {
        length += _putchar('-');
        n1=-n; 
    }
    else
        n1=n;
     
    while (n1 / divisor > 9 )
        divisor *= 10;

    while (divisor != 0)
    {
        length += _putchar('0' + (n1 / divisor));
        n1 %= divisor;
        divisor /= 10;
    }

    return (length);
}
