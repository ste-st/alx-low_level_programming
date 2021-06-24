#include "holberton.h"

/**
 * print_square - draws a square line on the terminal
 * @size: int.
 *
 */

void print_square(int size)
{
int a, m;
if (size <= 0)
_putchar('\n');
for (a = 0; a < size; a++)
{
for (m = 0; m < size; m++)
{
_putchar('#');
}
_putchar('\n');
}
}
