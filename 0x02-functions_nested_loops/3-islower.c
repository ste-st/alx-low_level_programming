#include "holberton.h"

/**
 * _islower - checks lowercase
 * @c: int
 * Return: 1 if lowercase or 0 if not.
 */

int _islower(int c)
{
char a;

for (a = 'a'; a <= 'z'; a++)
{
if (c == a)
return (1);
}
return (0);
}
