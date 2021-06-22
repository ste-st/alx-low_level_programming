#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: int
 * Return: Value of the last digit.
 */
int print_last_digit(int n)
{
int d;
d = (n % 10);
if (d < 0)
{
d = (-1 * d);
}
_putchar('0' + d);
return (d);
}
