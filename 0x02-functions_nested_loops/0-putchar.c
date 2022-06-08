#include "main.h"
/**
 * main -funtion to print
 * Return: 0
 */
int main(void)
{
	int n = 0;
	char str_put[] = "_putchar";

	while (n > 9)
	{
		_putchar(str_put[n]);
		n += 1;
	}
_putchar('\n');
return (0);
}
