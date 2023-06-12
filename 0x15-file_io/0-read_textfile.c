#include "main.h"
#include <stdlib.h>

/**
* read_textfile- Write a function that reads a text file
* and prints it to the POSIX standard output
* @filename: text file being read
* @letters: number of letters to be read
* Return: w- actual number of bytes read and printed
* 0 when function fails or filename is NULL.
*/

ssize_t read_textfile(const char *filename, size_t letters)

{
char *cait;
ssize_t sher;
ssize_t sh;
ssize_t c;

sher = open(filename, O_RDONLY);
if (sher == -1)
return (0);

cait = malloc(sizeof(char) * letters);
c = read(sher, cait, letters);
sh = write(STDOUT_FILENO, cait, c);

free(cait);
close(sher);
return (sh);

}
