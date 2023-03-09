#include "menger.h"
/**
 * menger - function that draws a 2D Menger Sponge 
 * @level: Menger Sponge to draw
 * Return: void
 */
void menger(int level)
{
	int X, Y, d, m = 1;

	if (level >= 0)
	{
		for (X = 0; X < level; X++)
		{
			d *= 3;
		}

		for (X = 0; X < m; X++)
		{
			for (Y = 0; Y < m; Y++)
			{
				for (d = m / 3; d > 0; d /= 3)
				{
					if ((X % (d * 3)) / d == 1 && (Y % (d * 3)) / d == 1)
						break;
				}
				if (d)
				{
					printf(" ");
				} else
				{
					printf("#");
				}
			}
			printf("\n");
		}
	}
}
