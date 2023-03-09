#include "menger.h"
/**
 * menger - function that draws a 2D Menger Sponge
 * @level: Menger Sponge to draw
 * Return: void
 */
void menger(int level)
{
	int i = 0, j = 0, x = 0, y = 0, z = pow(3, level);
	char p;

	if (level < 0)
		return;

	if (level == 0)
	{
		printf("#\n");
		return;
	}

	for (i = 0; i < z; i++)
	{
		for (j = 0; j < z; j++)
		{
			x = i;
			y = j;
			p = '#';

			while (y)
			{
				if (x % 3 == 1 && y % 3 == 1)
					p = ' ';
				x = x / 3;
				y = y / 3;
			}
			printf("%c", p);
		}
		printf("\n");
	}
}
