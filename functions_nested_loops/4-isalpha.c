#include "main.h"
/**
 *_isalpha - alpha
 *@c: int
 * Return: always 0.
 */
int _islower(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
