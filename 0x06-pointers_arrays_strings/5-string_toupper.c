#include "holberton.h"

/**
 * string_toupper - chang lowercase to uppercase
 * @s: string
 * Return: new string
 */
char *string_toupper(char *s)
{
int i;
i = 0;
while (*(s + i) != '\0')
{
if (*(s + i) >= 'a' && *(s + i) <= 'z')
{
*(s + i) = *(s + i)-32;
}
i++;
return (s);
}
