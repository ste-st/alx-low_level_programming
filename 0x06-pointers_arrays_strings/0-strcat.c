#include "holberton.h"

/**
 * _strcat - cooncatenates two strings
 * @dest: first string
 * @src: second string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
int n = 0;

while (*dest != '\0')
{
dest++;
n++;
}
while (*src)
{
*dest = *src;
dest++;
src++;
n++;
}
*(dest + 1) = '\0';
dest = dest - n;
return (dest);
}
