#include "lists.h"
/**
 * *add_node - function adds a new node at the beginning of a list_t list.
 * @head: bouble pointer to head
 * @str: string
 * Return: the address of the new element, or NULL if it failed.
*/
list_t *add_node(list_t **head, const char *str)
{
int i, len;
char *content;
list_t *new;

if (str == NULL || head == NULL)
return (NULL);
for (len = 0; str[len] != '\0'; len++)
;
new = *head;
content = malloc((len + 1) * sizeof(char));
if (content == NULL)
return (NULL);
for (i = 0; str[i]; i++)
content[i] = str[i];
new = malloc(sizeof(list_t));
if (new == NULL)
{
free(content);
return (NULL);
}
new->str = content;
new->len = len;
new->next = *head;
*head = new;
return (new);
}
