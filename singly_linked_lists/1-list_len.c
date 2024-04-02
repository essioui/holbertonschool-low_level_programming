#include "lists.h"
/**
 * list_len - function the number of elements in a linked list_t list.
 * @h: pointer of the lists
 * Return: number of element
*/
size_t list_len(const list_t *h)
{
    size_t i;
    while (h)
    {
        i++;
        h = h->next;
    }
    return (i);
}
