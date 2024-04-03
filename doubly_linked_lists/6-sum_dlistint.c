#include "lists.h"
/**
 * sum_dlistint - print the sum of all the data (n)
 * @head: pointer head
 * Return: the sum
*/
int sum_dlistint(dlistint_t *head)
{
int sum;
sum = 0;

if (head != NULL)
{
while (head != NULL)
{
sum += head->n;
head = head->next;
}
}
return (sum);
}
