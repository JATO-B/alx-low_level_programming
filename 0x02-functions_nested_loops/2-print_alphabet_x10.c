#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet in lowercase, in ten lines
 *
 * Return: 0 Success
 */
void print_alphabet_x10(void)
{
char alp;
int numb = 1;
while (numb <= 10)
{
for (alp = 'a'; alp <= 'z'; alp++)
{
_putchar(alp);
}
_putchar('\n');
alp = 'a';
numb++;
}
}

