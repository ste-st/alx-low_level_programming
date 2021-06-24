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
_putchar('\n');
for (a = 0; a < n; a++)
{
for (m = 0; m < a; m++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
