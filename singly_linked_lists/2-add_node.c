#include "lists.h"
/**
 * *add_node - function adds a new node at the beginning of a list_t list.
 * @head: bouble pointer to head
 * @str: string
 * Return: the address of the new element, or NULL if it failed.
*/
list_t *add_node(list_t **head, const char *str)
{
    list_t *new_node;
    int i;
    for (i = 0; str[i] != '\0'; i++)
    ;
    new_node = malloc(sizeof(size_t));
    if (new_node = NULL)
    {
        return (NULL);
    }
    if (new_node-> str == NULL)
    {
        free(new_node);
        return (NULL);
    }
    new_node->len = i;
    new_node->next = *head;

    *head = new_node;
    return (head);
    
}
