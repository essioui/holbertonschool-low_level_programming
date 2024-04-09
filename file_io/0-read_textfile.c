#include "main.h"
/**
 * read_textfile - Reads a text file and prints it
 * @filename: Pointer
 * @letters: Number of letters
 *
 * Return: Actual number of letters read and printed
 * 0 if filename is NULL
 * 0 if write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fn = open(filename, O_RDONLY);
ssize_t b;
char *buf = malloc(sizeof(char) * letters + 1);

if (fn == -1)
return (0);
if (!buf | !filename)
return (0);
b = read(fn, buf, letters);
if (b == -1)
return (0);
buf[b] = '\0';
b = write(STDOUT_FILENO, buf, b);
if (b == -1)
return (0);
close(fn);
free(buf);
return (b);
}
