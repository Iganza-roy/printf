#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/*this is the header file that Contains function prototypes used in the various files*/

int _printf(const char *format, ...);
int _putchar(char c);
int _printneg(int n , char *bf);
int _printint(const char *str);

#endif
