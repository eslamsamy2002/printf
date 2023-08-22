#ifndef _MAIN_H
#define _MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

int _printf(const char *format, ...);
int take(char c, va_list args);
int print_string(va_list args);
int print_char(va_list args);
int strange_string(char c);
int print_percent(int one);
int print_int(va_list arg);
int _putchar(char c);




#endif
