#include "holberton.h"

/**
 * rev_string - reverse strinfg
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
int i = 0;
int n = 0;
char p;
while (s[i] != '\0')

i++;
}
i = i - 1;
while (n <= i)
{
p = s[n];
s[n] = s[i];
s[i] = p;
n++;
i--;
}
}
