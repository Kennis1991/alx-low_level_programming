#include <stdio.h>
#include <stdlib.h>

/**
 * main - excution starts and end in the main funtion
 *
 * Description:print alphabet in reverse order and it must be in lowercase
 *
 * Return:return value is (0)
 */

int main(void)
{
	int i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);

	putchar('\n');

	return (0);
}
