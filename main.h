#ifndef _MAIN_H
#define _MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int take(char c, va_list args);
int print_string(va_list args);
int print_char(va_list args);
int strange_string(char c);
int print_percent(int one);
int print_int(va_list arg);
int _putchar(char c);
int size(unsigned int n, int b);
int print_binary(va_list arg);
int print_reverse(va_list args);



#endif
