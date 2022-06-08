#include "main.h"
/**
 * main - program that prints _putchar
 *
 * Return: 0
 */
int main(void)
{
	char *h = "_putchar\n";

	while (*h)
	{
		_putchar(*h);
		h++;
	}
return (0);
}
