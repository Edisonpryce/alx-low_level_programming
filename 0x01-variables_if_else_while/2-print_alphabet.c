#include <stdio.h>
/**
 * main - program that prints the alphabet in lowercase, followed by a new line
 * You can only use the putchar
 *
 * Return: 0
 */
int main(void)
{
int alphabet;
alphabet = 'a';
while (alphabet <= 'z')
{
putchar('%c', alphabet);
alphabet++;
}
putchar('\n');
return (0);
}
