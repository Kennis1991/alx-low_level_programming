#include "main.h"

/**
 * print_alphabet_x10 - print_alphabet_x10
 *
 * Description: print lower alpabets in 10 places
 *
 * Return:return 0
 */

void print_alphabet_x10(void)
{
	char i;
	int num;

	for (num = 1 ; num <= 10 ; num++)
	{
		for (i = 'a' ; i <= 'z' ; i++)
		{
			_putchar(i);
		}

		_putchar('\n');
	}
}
