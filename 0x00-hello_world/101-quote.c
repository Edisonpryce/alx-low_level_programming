#include <stdio.h>
#include <unistd.h>

/*
 * main - Entry point
 *
 * Description: Prints 'and that piece of art is useful ... 
 *
 * Return: 1
 */
int main(void)
{
char*s="and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
long l=59;
long fd=1;
long syscall=1;
long ret=0;
asm ("syscall"
: "=a" (ret)
: "a" (yscall,
"D" (fd),
"S" (s),
"d" (l));

return (1);
}
