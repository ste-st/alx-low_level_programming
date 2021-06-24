#include <stdio.h>
/**
 *main - Entry point.
 *Return: Always 0.
 */
int main(void)
{
int i;
printf("Infinite loop incoming :(\n");
i = 20;
while (i < 10)
{
putchar(i);
}
printf("Infinite loop avoided! \\0/\n");
return (0);
}
