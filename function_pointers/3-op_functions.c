#include "function_pointers.h"
#include "3-calc.h"


/**
 * op_add - function add two numbers
 * @a: integer
 * @b: integer
 * Return: sum
*/
int op_add(int a, int b)
{
    return (a + b);
}

/**
 * op_sub - function subscraction two numbers
 * @a: intger
 * @b: integer
 * Return: sum
*/
int op_sub(int a, int b)
{
    return (a - b);
}

/**
 * op_mul - function multiplication two numbers
 * @a: integer
 * @b: integer
 * Return: sum
*/
int op_mul(int a, int b)
{
    return (a * b);
}

/**
 * op_div - function division two numbers
 * @a: integer
 * @b: integer
 * Return: sum
*/
int op_div(int a, int b)
{
    return (a / b);
}

/**
 * op_mod - function modulo between two numbers
 * @a: integer
 * @b: integer
 * Return: sum
*/
int op_mod(int a, int b)
{
    return (a % b);
}