#include "holberton.h"

/**
 *_issupper - Checks if c is uppercase.
 * @c: int
 *
 * Return: 1 if c is uppercase and 0 if not.
 */

int_ isuper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
