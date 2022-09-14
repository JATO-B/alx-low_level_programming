#include <stdio.h>
#include "main.h"
/**
* main - entry point
*
* prints_alphabet -  prints the alphabet of in lowercase
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
