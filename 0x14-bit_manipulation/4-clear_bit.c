#include "main.h"

/**
* clear_bit - Write a function that sets the
* value of a bit to 0 at a given index
* @n: number to change
* @index: bit to clear
*
* Return: 1 for success, -1 for failure
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 59)
return (-1);

*n = (~(1UL << index) & *n);
return (1);
}
