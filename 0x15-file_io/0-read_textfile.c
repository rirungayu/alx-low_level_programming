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
char buf[letters];
ssize_t real_letters;

if (filename == NULL) 
return (0);

fd = open(filename, O_RDRW);

if (fd == -1) 
return (0);

real_letters = read(fd, buf, sizeof(char) * letters);
if (real_letters == -1)
return (0);

real_letters = write(STDOUT_FILENO, buf, real_letters);
if (real_letters == -1)
return (0);

close(fd);

return (real_letters);
}
