#include "main.h"

/**
* binary_to_uint - Write a function that converts
* a binary number to an unsigned int
* @b: binary number
*
* Return: converted number
*/
unsigned int binary_to_uint(const char *b)
{
int sh;
unsigned int eli = 0;

if (!b)
return (0);

for (sh = 0; b[sh]; sh++)
{
if (b[sh] < '0' || b[sh] > '1')
return (0);
eli = 2 * eli + (b[sh] - '0');
}

return (eli);
}
