#include "main.h"

/**
* append_text_to_file - appends text to a file
* @filename: name of file
* @text_content: text to be appended
* Return: 1 or -1
*/

int append_text_to_file(const char *filename, char *text_content)
{
ssize_t real_letters;
int fd;

if (filename == NULL)
return (-1);

fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);

if (text_content != NULL)
{
real_letters = write(fd, text_content, strlen(text_content));
if (real_letters == -1)
{
close(fd);
return (-1);
}
}

close(fd);
return (1);
}
