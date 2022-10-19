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
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
