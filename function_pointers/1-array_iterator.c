#include "function_pointers.h"
/**
 * array_iterator - function pointer
 * @array: array array
 * @size: unsigned long
 * @action: function of pointer
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
    unsigned long i; //size_t is typedef unsigned long
    for (i = 0; i < size; i++)
    {
        action (array[i]);
    }
    
}