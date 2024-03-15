#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structures
 * @name: charactere
 * @age: float
 * @owner: char
*/

struct dog
{
char *name;
float age;
char *owner;
} my_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
