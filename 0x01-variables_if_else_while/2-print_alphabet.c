#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main()
{
	char l;

	for (l = 'a'; l <= 'z'; ++l)
		putchar("%d\n", l);

	return 0;
}
