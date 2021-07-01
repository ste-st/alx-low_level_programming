#include "holberton.h"

/**
 * swap_int - wsaps the valuesof two integers
 * @a: firt value poiner
 * @b: second value pointer
 * Return: void
 */

void swap_int(int a, int b)
{
int n;
n = *a;
*a = *b;
*b = n;
}
