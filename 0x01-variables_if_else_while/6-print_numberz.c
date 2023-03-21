#include <stdio.h>
#include <stdlib.h>

/**
 * main - execution starts and ends in the main function
 *
 * Description: use putchar to print a digit
 *
 * Return:return value is (0)
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');

	putchar('\n');

	return (0);
}
