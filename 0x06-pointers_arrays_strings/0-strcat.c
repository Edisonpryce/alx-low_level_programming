#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @desk: the destination buffer
 * @src: the source buffer
 *
 * Return: point to destination buffer
 */

char *_strcat(char *dest, char *src)
{
	char *ret = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (ret);
}
