#include "main.h"

/**
 *_putchar - ...
 *@c: The print char
 *Return: in right case return  1.
 *in case of fault, it return -1.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
