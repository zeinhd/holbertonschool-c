#include <stdio.h>

/**
 * main - the sum of even-valued Fibonaccis
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, fibsum;
	float sum;

	while (1)
	{
		fibsum = fib1 + fib2;
		if (fibsum > 4000000)
			break;
		if ((fibsum % 2) == 0)
			sum += fibsum;
		fib1 = fib2;
		fib2 = fibsum;
	}
	printf("%.0f\n", sum);
	return (0);
}
