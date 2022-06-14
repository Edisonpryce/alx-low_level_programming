#include "main.h"

/**
 * _puts - prints string followed by newline too stdout
 * _putchar - prints out character c form _puts function
 * @str: char array string type
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
