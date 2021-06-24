#include "holberton.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * followed by a new line.
 *
 */

void more_numbers(void)
{
int n, m;

for (n = 1; n <= 10; n++)
{
for (m = 0; m <= 14; m++)
{
int a, b;
a = m / 10
b = m % 10
if (a != 0)
_putchar(a + '0');
_putchar(b + '0');
}
_putchar('\n');
}
}
