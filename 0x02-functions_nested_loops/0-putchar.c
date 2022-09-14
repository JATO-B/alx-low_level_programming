#include "main.h"
/**
*main - printing _putchar
*
*Return: always 0 success
*/

int main(void)
{
int j = 0;
char text[] = "_putchar";
while (text[j] != '\0')
{
_putchar(text[j]);
j++;
}
_putchar('\n');
return (0);
}
