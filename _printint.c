#include "main.h"

/**
 * _printint - ....
 * @str: ...
 * Return: ..
 */
int _printint(const char *str)
{
	int counter = 0;

	while (*str)
	{
		counter++;
		str++;
	}
	return (counter);
}

/**
 * _printneg - ....
 * @n: ...
 * @bf: ...
 * Return: ...
 */
int _printneg(int n, char *bf)
{
	int i = 0;
	int neg = 0;
	int x = 0;
	int y = i - 1;

	if (n < 0)
	{
		neg = 1;
		n = -n;
	}

	do {
		bf[i++] = (n % 10) + '0';
		n /= 10;
	} while (n > 0);

	if (neg)
	{
		bf[i++] = '-';
	}

	while (x < y)
	{
		char tmp = bf[x];

		bf[x] = bf[y];
		bf[y] = tmp;
		x++;
		y--;
	}
	return (i);
}


