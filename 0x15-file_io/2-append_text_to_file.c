#include "main.h"

/**
* append_text_to_file - Write a function that
* appends text at the end of a file
* @filename: A pointer to the name of the file
* @text_content: The string to add to the end of the file
*
* Return: If the function fails or filename is NULL - -1
* If the file does not exist the user lacks write permissions - -1
* Otherwise - 1
*/

int append_text_to_file(const char *filename, char *text_content)
{
int cay, sha, sun = 0;

if (filename == NULL)

return (-1);

if (text_content != NULL)
{
for (sun = 0; text_content[sun];)
sun++;
}

cay = open(filename, O_WRONLY | O_APPEND);
sha = write(cay, text_content, sun);
if (cay == -1 || sha == -1)

return (-1);

close(cay);

return (1);
}
