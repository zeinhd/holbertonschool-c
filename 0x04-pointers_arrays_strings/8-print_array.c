#include "holberton.h"
#include <stdio.h>

/**
 *print_array - print array of int
 *@a: array
 *@n: size of array
 *
 *Return (Void)
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n - 1; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
