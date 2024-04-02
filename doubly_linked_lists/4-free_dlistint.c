#include "lists.h"
/**
 * free_dlistint - function for free a dlistint_t list.
 * @h: pointer of linked lists
 * Return: void
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
