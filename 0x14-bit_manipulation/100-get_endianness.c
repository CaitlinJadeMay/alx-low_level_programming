#include "main.h"

/**
* get_endianness - Write a function that checks the endianness
* Return: 0 for big, 1 for little
*/
int get_endianness(void)
{
unsigned int sher = 1;
char *x = (char *) &sher;

return (*x);
}
