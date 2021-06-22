#include "holberton"

/**
 * _isalpha - checks for alphabet character.
 * @c: int
 * Return: 1 if c is a letter, lowercase or uppercase.
 */

int _isalpha(int c)
{
char one;
char two;

for (one = 'a'; one <= 'z'; one++)
{
if (c == one)
return (1);
}
for (two = 'A'; two <= 'Z'; two++)
{
if (c == two)
return (1);
}
return (0);
}
