#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - -Entry point
 *
 * Return: Alaways 0 (Success)
 */

int main(void)
{
	char casel;

	for (casel = 'a'; casel <= 'z'; casel++)
		putchar(casel);
		putchar('\n');

	return (0);
}
