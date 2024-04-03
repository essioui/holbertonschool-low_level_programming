#include "lists.h"
/**
 * 
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new, *tmp;
unsigned int i;

new = NULL;
if (idx == 0)
new = add_dnodeint(h, n);
else
tmp = *h;
i = 1;
if (tmp != NULL)
while (tmp->prev != NULL)
tmp = tmp->prev;
while (tmp != NULL)
{
if (i == idx)
{
if (tmp->next == NULL)
new = add_dnodeint_end(h, n);
else
{
new = malloc(sizeof(dlistint_t));
if (new != NULL)
{
new->n = n;
new->next = tmp->next;
new->prev = tmp;
tmp->next->prev = new;
tmp->next = new;
}
}
break;
}
tmp = tmp->next;
i++;
}
return (new);
}

