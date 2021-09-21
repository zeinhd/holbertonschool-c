/**
 *reverse_array - reverse an array
 *@a: array
 *@n: size of array
 *
 *Return: void
 */
void reverse_array(int *a, int n)
{
	int temp, i;
	int size = n - 1;

	for (i = 0; i < n; i++)
	{
		if (i > size)
			break;
		temp = a[i];
		a[i] = a[size];
		a[size] = temp;
		size--;
	}
}
