#include <stdio.h>
#include "main.h"
/**
 * main - prints the alphabet of in lowercase 
 *
 * Return: void
 */

void print_alphabet(void)
{
char alp;
for (alp = 'a'; alp <= 'z'; alp++)
{
_putchar(alp);
}
_putchar('\n');
}
