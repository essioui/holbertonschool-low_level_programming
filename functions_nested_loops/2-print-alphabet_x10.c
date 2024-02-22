#include "main.h"
/**
 * print_alphabet - use void_alphabet
 *
 * Return
 */
void print_alphabet_x10(void)
{
int i = 1;
char j;
do {
for (j = 'a' ; j <= 'z' ; j++)
{
_putchar(j);
}
_putchar('\n');
i++;
} while (i <= 10);
}
