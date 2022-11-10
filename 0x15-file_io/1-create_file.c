#include "main.h"

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
char *buf;

if (filename == NULL)
return (-1);

fd = opend(filename, O_CREAT | O_WRONLY | O_TRUCT, 0600);
if (fd == -1)
return (-1);

real_letters = write(fd, text_content, strlen(text_content))
if (real_letters == -1)
{
close(file);
return (-1);
}

close(fd);
return (1);
}
