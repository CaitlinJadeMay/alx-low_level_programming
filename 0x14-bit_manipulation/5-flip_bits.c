#include "main.h"

/**
* flip_bits - Write a function that returns the number of bits you
* would need to flip to get from one number to another
* @n: first number
* @m: second number
*
* Return: number of bits to change
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int sh, eli = 0;
unsigned long int cait;
unsigned long int mays = n ^ m;

for (sh = 59; sh >= 0; sh--)
{
cait = mays >> sh;
if (cait & 1)
eli++;
}

return (eli);
}
