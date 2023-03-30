#include "main.h"

/**
 * _islower - _islower function
 *
 * @c : character to be checked
 *
 * Description: check for a lowercase in a character
 *
 * Return:return value is 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
