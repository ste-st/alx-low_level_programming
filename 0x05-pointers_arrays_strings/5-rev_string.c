#include "holberton.h"

/**
 * rev_string - reverse strinfg
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{

int i, len, len1;
char p;

len = 0;
len1 = 0;
while (s[len] != '\0')
{
len++;
}
len1 = len - 1;
for (i = 0; i < len / 2; i++)
{
p = s[i];
s[i] = s[len1];
s[len1--] = p;

}
}
