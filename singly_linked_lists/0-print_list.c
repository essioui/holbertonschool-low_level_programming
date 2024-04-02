#include "lists.h"
/**
 * print_list - function prints all the elements of a list_t list.
 * @h: pointer of the list
 * Return: number of node
*/
size_t print_list(const list_t *h)
{
    size_t i = 0;
    while (h != NULL)
    {
        if (h->str == NULL)
            printf("[o] (nil)\n");
            else
            printf("[%u] %s\n", h->len, h->str);
            h = h->next;
            i++;  
    }
    return (i);
}