#include <stdio.h>
#include <stdlib.h>

/**
 * main - function execution starts and ends here
 *
 * Description: print alphabets in lowercase
 *
 * Return: return (0)
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');

	return (0);
}
