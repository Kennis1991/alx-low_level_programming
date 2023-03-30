#include "main.h"

/**
 * print_last_digit - print_last_digit function
 *
 * Description:print the last of number
 *
 * @j:condition to be checked
 *
 * Return:return value last_digit
 */

int print_last_digit(int j)
{
	int last_digit = j % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
