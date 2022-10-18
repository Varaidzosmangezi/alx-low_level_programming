#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'determines whether random number is positive/negative/zero'
 *
 * Return: Always 0 (Sucess)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
		if (n not_eq 0)
		{
			if (n > 0)
			{
				printf(n "is positive");
			}
			else
			{
				printf(n "is negative");
			}
		}
		else
		{
			printf(n "is zero");
		}
	return (0);
}
