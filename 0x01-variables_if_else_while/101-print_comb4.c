#include <stdio.h>

/**
 * main - execution start and end in the main function
 *
 * Description:print combination of three diff number
 *
 * Return:return value is 0
 */

int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0; j < 10 ; j++)
		{
			for (k = 0; k < 10 ; k++)
			{
				if (i < j && j < k)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');

					if (i + j + k != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
