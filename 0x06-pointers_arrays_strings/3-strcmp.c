#include "holberton.h"

/**
 * _strcmp - compares two strings
 * @s1: string
 * @s2: string
 * Return: difference between string
 */
int _strcmp(char *s1, char *s2)
{
int len = 0;
int result = 0;

while (*(s1 + len) != '\0' && *(s2 + len) != '\0')
{
result = *(s1 + len) - *(s2 + len);
if (result == 0)
{
len++;
}
else
break;
}
return (result);
}
