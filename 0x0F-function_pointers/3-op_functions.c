#include "3-calc.h"

/**
 * op_add - returns the sum of two ints
 * @a: first int to sum
 * @b: the second int
 *
 * Return: sum value
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of two int
 * @a: first int
 * @b: second int
 *
 * Return: diff value
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the multiplication of two int
 * @a: the first int
 * @b: the second int
 *
 * Return: mul value (int)
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the division of two int
 * @a: the first int
 * @b: the second int
 *
 * Return: div int
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of a num
 * @a: the first int
 * @b: the second int
 *
 * Return: mod value (int)
 */
int op_mod(int a, int b)
{
	return (a % b);
}
