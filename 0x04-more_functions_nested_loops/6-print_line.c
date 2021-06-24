#include "holberton.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: int.
 */

void print_line(int n)
{

int a;
if (n > 0)
{
for (a = 0; a < n; a++)
{
_putchar('_');
}
_putchar('\n');
}
else if (n <= 0)
{
_putchar('_');
}
}
