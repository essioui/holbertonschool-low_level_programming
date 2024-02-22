#include "main.h"
#include <ctype.h>
/**
 *_islower(int c) - islower
 *@c: int
 * Return
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
