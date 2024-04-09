#include "main.h"
/**
 * create_file - creates a file
 * @filename: absolute/relative path to a file
 * @text_content: content to write into the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
int file, size;
ssize_t nb;

if (filename == NULL)
return (-1);

file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

if (file == -1)
return (-1);

if (text_content == NULL)
{
close(file);
return (1);
}
for (size = 0; text_content[size] != '\0'; size++)
;
nb = write(file, text_content, size);

if (nb == -1)
{
close(file);
return (-1);
}

close(file);
return (1);
}