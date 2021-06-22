#include <stdio.h>

/**
 * main - prints the sum of fibonacci terms
 *
 * Return: Always 0.
 */
int main(void)
{
int n;
unsigned long int a = 1, b = 2, c, add = 0;

for (n = 1; n <= 33; ++n)
{
if (a < 4000000 && (a % 2) == 0)
{
add = add + a;
}
c = a + b;
a = b;
b = c;
}
printf("%lu\n", add);

return (0);
}
