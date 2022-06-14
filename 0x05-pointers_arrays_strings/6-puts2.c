#include "main.h"
/**
 * puts2 - print every character of a string
 * @str: char type pointer
 * Description: print every character of a string
 *
 */

void puts2(char *str)
{
	int i;


	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
