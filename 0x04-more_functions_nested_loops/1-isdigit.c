#include "holberton.h"

/**
 * _isdigit - checks for a digit (0 through 9).
 * @c: int.
 * Return: 1 if is digit and 0 if not.
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
