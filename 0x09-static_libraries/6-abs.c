#include "main.h"
/**
 * _abs - a function that computes the absolute value of an integer
 * @ab: the int to be checked
 * Return: absolute value of ab
 */
int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}
