#include <stdio.h>
/**
 * main - printing lowercase alphabet in reverse order
 *
 * Return: 0
 */

int main(void)
{
char g;
for (g = 'z'; g >= 'a'; g--)
{
putchar(g);
}
putchar('\n');
return (0);
}
