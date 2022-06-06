#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - assign a random number to the variable n each time it is executed
 * if the last digit is greater than 5 or less and not zero or its 0
 *
 * Return: 0
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d is ", n);
if (n > 5)
{
printf("and is greater than 5");
}
else if (n < 0)
{
printf("and is less than 6 and not zero");
}
else
{
printf("and is 0");
}
return (0);
}
