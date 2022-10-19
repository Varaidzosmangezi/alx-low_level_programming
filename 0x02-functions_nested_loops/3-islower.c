#include "main.h"
/**
 * _islower - check if lower case
 *
 * @c: is character to be checked
 * Return: 1 if lower case otherwise 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
