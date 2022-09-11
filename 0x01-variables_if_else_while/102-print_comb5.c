#include <stdio.h>
/**
 * main - prinyints combination of two two digits number
 *
 * Return: 0
 */

int main(void)
{
int c;
int d;
int a;
int b = 0;
while (b < 10)
{
a = 0;
while (a < 10)
{
if (b <= a)
{
putchar('0' + a);
putchar('0' + b);
putchar(' ');
}
a++;
}
b++;
}
d = 0;
while (d < 10)
{
c = 0;
while (c < 10)
{
if (d != c && d < c)
{
putchar('0' + d);
putchar('0' + c);
{
putchar(',');
putchar(' ');
}
}
c++;
}
d++;
}
putchar('\n');
return (0);
}
