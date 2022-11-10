#include "main.h"
#include <string.h>

/**
* create_file - creates a file
* @filename: name of file to read
* @text_context: content
* Return: 1 or -1
*/

int create_file(const char *filename, char *text_content)
{
ssize_t real_letters;
int fd;

if (filename == NULL)
return (-1);

fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (fd == -1)
return (-1);

real_letters = write(fd, text_content, strlen(text_content));
if (real_letters == -1)
{
close(fd);
return (-1);
}

close(fd);
return (1);
}
