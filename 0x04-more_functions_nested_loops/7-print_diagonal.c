#include "holberton.h"

/**
 * print_diagonal - drwas a diagonal line on the terminal.
 * @n: int
 */

void print_diagonal(int n)
{
int a, m;
if (n <= 0)
{
_putchar('\n')
}
else
{
for (a = 0; a < n; a++)
{
for (m = 0; m <= a; m++)
{
if (m != a)
{
_putchar(32);
}
else
{
_putchar(92);
}
}
_putchar('\n');
}
}
}
