#include "palindrome.h"

/**
 * is_palindrome - whether or not a given unsigned integer
 * @n: number to be checked
 * Return: 1 or 0
 */

int is_palindrome(unsigned long n)
{
	unsigned long num, aux, len;

	num = n;
	len = 1;

	while (num / 10)
	{
		num /= 10;
		len *= 10;
	}

	aux = 0;
	num = n;

	while (len / 10)
	{
		aux = (aux * 10) + (num % 10);

		if (aux != (n / len))
			return (0);

		len /= 10;
		num /= 10;
	}

	return (1);
}
