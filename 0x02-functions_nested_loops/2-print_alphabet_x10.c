#include "holberton.h"


/**
 * print_alphabet_x10 - prints alphabet ten times.
 *
 * Return: void.
 */

void print_alphabet_x10(void)
{
int n = 1;
char a;

while (n <= 10)
{
for (a = 'a'; a <= 'z'; a++)
{
_putchar(a);
}
_putchat('\n');
n++;
}
}
