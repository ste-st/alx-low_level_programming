#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100
 * followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
int n;

for (n = 1; n <= 100; n++)
{
if (n % 5 == 0 && n % 3 == 0)
printf("%s", "FizzBuzz")
else if (n % 3 == 0)
printf("%s", "Fizz");
else if (n % 5 == 0)
printf("%s", "Buzz");
else
printf("%d", n);
if (n != 100)
printf(" ");
}
printf("\n");
return (0);
}
