#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number
 *
 * @n: The number to find the square root of
 *
 * Return: The square root of n or -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return -1;
	if (n == 0 || n == 1)
		return n;
	int low = 1, high = n, mid, sqrt;
	while (low <= high)
	{
		mid = (low + high) / 2;
		sqrt = n / mid;
		if (mid == sqrt)
			return mid;
		else if (mid < sqrt)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return high;
}
