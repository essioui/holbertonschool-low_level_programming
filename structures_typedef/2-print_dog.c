#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints a struct dog
 * @d: pointer to struct
 *
 * Return: None
 */
void print_dog(struct dog *d)
{
if (d)
return;
if (d->name)
printf("Name: %s\n", d->name);
else
printf("Name: (nil)\n");
printf("Age: %.2f\n", d->age);
if (d->owner)
printf("Owner: %s\n", d->owner);
else
printf("Owner: (nil)\n");
}