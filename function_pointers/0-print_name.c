#include "function_pointers.h"
/**
 * print_name - function have function to pionter and pointer
 * @name: char
 * @f: function to pointer
*/
void print_name(char *name, void (*f)(char *))
{
f(name);
}
