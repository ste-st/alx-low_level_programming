#include <stdio.h>

/**
 * main - Lists all natural numbers below 1024
 * that are multiples of 3 or .
 *Return: Always 0.
 */
int main(void)
{
int n, d = 0;

for (n = 0; n < 1024; n++)
{
if ((n % 3) == 0 || (n % 5) == 0)
d += n;
}
printf("%d\n", d);
return (0);
}
