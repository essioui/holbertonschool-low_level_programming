#include "lists.h"
/**
 * dlistint_len - function calc length.
 * @h: pinter of linked lists.
 * Return: number of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
size_t count = 0;

while (h)
{
h = h->next;
count++;
}
return (count);
}
