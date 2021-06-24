#include "holberton.h"

/**
 * print_triangle - prints a triangle followedby a new line.
 * @size: int
 *
 */

void print_triangle(int size)
{
int n, m;

if (size <= 0)
_putchar('\n');
for (n = 1; n <= size; n++)
{
for (m = 1; m <= size; m++)
{
if (m <= (size - n))
_putchar(' ');
else
_putchar('#');
}
_putchar('\n');
}
}
