#include <stdio.h>
/**
 * main - prints all base16 numbers
 *
 * Return: o
 */

int main(void)
{
char a;
int b;
for (b = '0'; b <= '9'; b++) {
putchar(b);
}
for (a = 'a'; a <= 'f'; a++)
{
putchar(a);
}
putchar('\n');
return (0);
}
