#include "main.h"

/**
 * reverse_array - reverses the contentt of an array of integers
 *
 * @a: pointer to array
 * @n: number of elements in array
 */
void reverse_array(int *a, int n)
{
	int x, z;

	for (x = 0; x < n; x++)
	{
		n--;
		z = a[x];
		a[x] = a[n];
		a[n] = z;
	}
}
