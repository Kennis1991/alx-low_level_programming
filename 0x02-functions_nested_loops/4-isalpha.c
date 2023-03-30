#include "main.h"

/**
 * _isalpha - _isalpha
 *
 * Description:check for both lowercase and uppercase character
 *
 * @c:parameter to be check
 *
 * Return:return value
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
