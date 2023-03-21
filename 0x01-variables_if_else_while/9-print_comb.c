#include <stdio.h>

/**
 * main - execution starts and end in the main function
 *
 * Description: print singles numbers seperated by comma
 *
 * Return:return value is (0)
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
