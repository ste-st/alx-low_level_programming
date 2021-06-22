#include "holberton.h"


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char *hol = "Holberton";

while (*hol)
{
_putchar(*hol);
hol++;
}
_putchar('\n');

return (0);
}
