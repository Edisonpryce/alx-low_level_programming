#include "main.h"
/**
 * _islower - check if the given character is lower case.
 * @c: character to test.
 *
 * Return: 1 (True) else 0 (False)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
