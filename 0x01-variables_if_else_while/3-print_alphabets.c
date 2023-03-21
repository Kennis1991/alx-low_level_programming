#include <stdio.h>
#include <stdlib.h>

/**
 * main - start and end of my function
 *
 * Description: prints the alphabet in lowercase, followed by a new line
 *
 * Return: return value 0
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	for (i = 'A' ; i <= 'Z' ; i++)
		putchar(i);

	putchar('\n');

	return (0);

