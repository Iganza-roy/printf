#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
void _int(int num, int *count);
int _printint(const char *str);
void _binary(unsigned int n);

#endif
