#include "holberton.h"

/**
 * _strlen - return de lengh of a string
 * @s: char
 * Return: lengh of a string
 */

int _strlen(char *s)
{
int i;

i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
