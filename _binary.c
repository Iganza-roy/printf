#include "main.h"

/**
 * _binary - ..
 * @n: ...
 */
void _binary(unsigned int n)
{
	if (n > 1)
	{
		_binary(n / 2);
	}
	_putchar('0' + n % 2);
}
