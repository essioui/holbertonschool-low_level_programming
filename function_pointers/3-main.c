#include "function_pointers.h"
#include "3-calc.h"
#include <stdlib.h>
/**
 * 
*/
int main(int argc, char *argv[])
/*This is the main function of the program. It takes command-line arguments*/
{

int num1, num2, calc;
/*These variables are declared to hold the two numbers and the result of the operation.*/
char operator;
/*This variable is declared to hold the arithmetic operator.*/
int (*f)(int a, int b);
/*This is a function pointer named f that points to a function which takes two integers as arguments and returns an integer.*/
if (argc != 4) 
{
printf("Error\n"); exit(98);
}
/*This checks if the number of arguments passed is not equal to 4. If so, it prints an error message "Error" and exits the program with status 98.*/

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
/*These lines convert the first and third command-line arguments (strings representing numbers) to integers and assign them to num1 and num2 respectively.*/
f = get_op_func(argv[2]);
/*This line calls a function get_op_func which takes the arithmetic operator as a string and returns a function pointer to the corresponding arithmetic
operation function (add, sub, mul, div, or mod). The returned function pointer is assigned to f.*/
if (f == NULL)
{
printf("Error\n"); exit(99);
}
/*This checks if the function pointer f is NULL, which means that the operator provided is invalid. If so, it prints an error message
"Error" and exits the program with status 99.*/
operator = *argv[2];
/*This line assigns the first character of the second command-line argument (which is the arithmetic operator) to the variable operator.*/
if ((operator == '/' || operator == '%') && num2 == 0)
{
printf("Error\n");
exit(100);
/*This checks if the operator is division (/) or modulus (%) and if the second number is zero. If both conditions are true, it prints an error message
"Error" and exits the program with status 100, indicating an attempt to divide by zero.*/
}
}
