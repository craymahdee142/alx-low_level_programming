#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int mod(int a, int b);

/**
 *add -function that adds two numbers
 *@a: first number
 *@b: second number
 *Return: sum of numbers
 */ 
int add(int a, int b)
{
	return (a + b);
}
/**
 *sub -function that subtracts two numbers
 *@a: first number
 *@b: second number
 *Return: sum of numbers
 */
int sub(int a, int b)
{
       	return (a - b);
}
/**
 *mul -function that mul two numbers
 *@a: first number
 *@b: second number
 *Return: sum of numbers
 */
int mul(int a, int b)
{
	return (a * b);
}
/**
 *div -function that divides two numbers
 *@a: first number
 *@b: second number
 *Return: sum of numbers
 */
int div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	else
	{
		return (0);
	}
}
/**
 *div -function that divides two numbers
 *@a: first number
 *@b: second number
 *Return: sum of numbers
 */
int mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	else
	{
		return (0);
	}
}
