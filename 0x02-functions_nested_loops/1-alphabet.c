#include "main.h"

/**
 * print_alphabet - print_alphabet
 *
 * Description:print alphabets in lowercase
 *
 * Return:return 0
 */

void print_alphabet(void)
{
	char alph;

	for (alph = 'a' ; alph <= 'z' ; alph++)
		_putchar(alph);

	_putchar('\n');
}
