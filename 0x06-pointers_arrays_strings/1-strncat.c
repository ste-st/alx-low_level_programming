#include "holberton.h"

/**
 * _strncat - concratenates two strings
 * @dest: to be concratenated to
 * @src: to be concratenated to dest
 * @n: number of bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0, j = 0;

while (*(dest + i) != '\0')
{
j++;
i++;
}
i = 0;
while (*(src + i) != *(src + n))
{
*(dest + j) = *(src + i);
i++;
j++;
}
*(dest + j) = '\0';
return (dest);
}
