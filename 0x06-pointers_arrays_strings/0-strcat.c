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
int m = 0;

while (*(dest + n) != '\0')
{
n++;
}
while (*(src + m) != '\0')
{
*(dest + n) = *(src + n);
n++;
m++;
}
*(dest + n) = '\0';
return (dest);
}
