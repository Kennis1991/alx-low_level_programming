#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 *
 * Description: prints the alphabet in lowercase, followed by a new line
 *
 * Return: return value
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);

	putchar('\n');
	return (0);
}
