#include "holberton.h"
/**
 * _abs - prints absolute value of inserted number
 * @i: number value
 *
 * Return: @i (positive)
 *
 */
int _abs(int i)
{
	if (i < 0)
	{
		return (i * -1);
	}
	else if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i);
	}
}
