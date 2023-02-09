#include "palindrome.h"

/**
 * is_palindrome - whether or not a given unsigned integer
 * @n: number to be checked
 * Return: 1 or 0
 */

int is_palindrome(unsigned long n)
{
	unsigned long num, value = 0;

	num = n;

	while (num != 0)
	{
		value = value * 10;
		value = value + num % 10;
	}
	if (n == value)
		return (1);
	else
		return (0);
}
