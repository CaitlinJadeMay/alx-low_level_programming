#include "main.h"

/**
* print_binary - Write a function that prints
* the binary representation of a number
* @n: print in binary
*/
void print_binary(unsigned long int n)
{
int cait, el = 0;
unsigned long int shaun;

for (cait = 63; cait >= 0; cait--)
{
shaun = n >> cait;

if (shaun & 1)
{
_putchar('1');
el++;
}
else if (el)
_putchar('0');
}
if (!el)
_putchar('0');
}
