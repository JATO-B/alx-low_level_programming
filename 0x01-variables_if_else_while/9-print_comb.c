#include <stdio.h>
/**
 * main - prints all possible combination of single digit number with comma and space between them
 *
 * Return: 0
 */

int main(void)
{
int c;
for (c = 48; c <= 57; c++)
{
putchar(c);
if (c != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
