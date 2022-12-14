#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lc;
	char e = 'e';
	char q = 'q';

	for (lc = 'a'; lc <= 'z'; ++lc)
	{
		if (lc != e && lc != q)
			putchar(lc);
	}
	putchar('\n');

	return (0);
}
