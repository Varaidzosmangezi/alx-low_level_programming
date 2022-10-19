#include "main.h"

/**
 * print_last_digit - prints last digit
 *
 * Description: prints last digit
 *
 * @n: the int being checked
 *
 * Return: return 0
 */

int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
		last *= -1;

	_putchar(last + '0');

	return (last + '0');
}
