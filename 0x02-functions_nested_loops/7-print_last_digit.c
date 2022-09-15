#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @nld: number's last digit result
 * Return: value of the last digit
 */
int print_last_digit(int nld)
{
	int lnum;

	lnum = (nld % 10);
	if (lnum < 0)
{
	lnum = (-1 * lnum);
}
_putchar(lnum + '0');
return (lnum);
}
