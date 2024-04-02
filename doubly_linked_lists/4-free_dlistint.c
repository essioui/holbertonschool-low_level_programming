#include "lists.h"
/**
 * free_dlistint - function for free
 * @h: pointer of linked lists
*/
void free_dlistint(dlistint_t *head)
{
dlistint_t *cursor = head;
while (head)
{
head = head->next;
free(cursor);
cursor = head;
}
}
