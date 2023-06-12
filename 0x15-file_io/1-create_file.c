#include "main.h"


/**
* create_file - Create a function that creates a file
* @filename: A pointer to the name of the file to create.
* @text_content: A pointer to a string to write to the file.
*
* Return: If the function fails - -1.
* Otherwise - 1.
*/

int create_file(const char *filename, char *text_content)

{
int sher, cay, shau = 0;

if (filename == NULL)

return (-1);

if (text_content != NULL)
{
for (shau = 0; text_content[shau];)
shau++;

}
sher = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
cay = write(sher, text_content, shau);
if (sher == -1 || cay == -1)
return (-1);

close(sher);

return (1);
}
