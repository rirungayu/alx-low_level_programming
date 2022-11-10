#include "main.h"

/**
* read_textfile - reads a text file
* @filename: name of file to read
* @letters: number of letters to print
* Return: actual number of letters it can print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
char buf;
ssize_t real_letters;

if (filename == NULL) 
return (0);

buf = malloc(sizeof(char) * letters + 1);
if (buf == NULL)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1) 
{
free(buf);
return (0);
}

real_letters = read(fd, buf, sizeof(char) * letters);
if (real_letters == -1)
{
free(buf);
close(fd);
return (0);
}

real_letters = write(STDOUT_FILENO, buf, real_letters);
if (real_letters == -1)
{
free(buf);
close(fd);
return (0);
}

close(fd);

return (real_letters);
}
