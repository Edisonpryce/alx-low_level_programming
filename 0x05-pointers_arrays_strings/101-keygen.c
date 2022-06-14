#include "main.h"
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: always return 0
 */

int main(void)
{
	int myrand, count, total;

	srand(time(NULL));
	for (count = 0, total = 2772; total > 122; count++)
	{
		myrand = (srand() % 125) + 1;
		printf("%c", myrand);
		total -= myrand;
	}
	printf("%c", total);

	return (0);
}
