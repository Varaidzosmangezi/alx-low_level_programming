#include "main.h"

/**
 * print_alphabet_x10 - print alphabet times 10
 *
 * Description: print alphabet times 10
 */

void print_alphabet_x10(void)
{
	int counter = 0;
	char letter;

	while (counter++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
	_putchar('\n');
	}
}
