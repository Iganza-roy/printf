#include "main.h"


/**
 * _printf - simplified version of printf
 * @format: constant number of variables expected
 * Return: number of values printed
 */
int _printf(const char *format, ...)
{
	va_list types;
	int counter = 0;

	va_start(types, format);

	if (format == NULL)
		return (-1);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;

			switch (*format)
			{
			case 'c':
			{
				int a = va_arg(types, int);

				_putchar(a);
				counter++;
				break;
			}
			case 's':
			{
				char *b = va_arg(types, char *);

				while (*b != '\0')
				{
					_putchar(*b);
					b++;
					counter++;
				}
				break;
			}
			case 'd':
			case 'i':
			{
				int num = va_arg(types, int);
				char nbf[12];
				_printneg(num, nbf);
				counter += _printint(nbf);
				break;
			}
			case '%':
			{
				_putchar('%');
				counter++;
				break;
			}
			default:
				_putchar('%');
				_putchar(*format);
				counter += 2;
				break;
			}
		}
		else
		{
			_putchar(*format);
			counter++;
		}
		format++;
	}
	va_end(types);
	return (counter);
}
