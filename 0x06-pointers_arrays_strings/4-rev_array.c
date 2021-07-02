#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: the array
 * @n: the size of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
int tmp, i = 0, last;
last = n - 1;
while (i < last)
{
tmp = *(a + i);
*(a + i) = *(a + last);
*(a + last) = tmp;
i++;
last--;
}
}
