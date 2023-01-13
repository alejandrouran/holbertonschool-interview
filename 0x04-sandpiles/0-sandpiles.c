#include <stdio.h>
#include "sandpiles.h"

/**
 * sandpiles_sum - sum of two sandpiles
 * @grid1: first sandpiles
 * @grid2: second sandpiles
 */

void sandpiles_sum(int grid1[3][3], int grid2[3][3])
{
	grid_sum(grid1, grid2);
	while (!grid_check(grid1))
	{
		grid_print(grid1);
		grid_change(grid1);
	}
}

/**
 * grids_sum - sum of two grids
 * @grid1: first sandpiles
 * @grid2: second sandpiles
 */

void grid_sum(int grid1[3][3], int grid2[3][3])
{
	int i = 0;
	int j = 0;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			grid1[i][j] = grid1[i][j] + grid2[i][j];
		}
	}
}

/**
 * grid_print - print grid
 * @grid: sandpiles
 */

void grid_print(int grid[3][3])
{
	int i = 0;
	int j = 0;

	printf("=\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (j)
				printf(" ");
			printf("%d", grid[i][j]);
		}
		printf("\n");
	}
}

/**
 * grid_check - check grid
 * @grid: sandpiles
 * Return: 1
 */

int grid_check(int grid[3][3])
{
	int i = 0;
	int j = 0;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (grid[i][j] > 3)
				return (0);
		}
	}
	return (1);
}

/**
 * grid_change - change grid
 * @grid1: first sandpiles
 */

void grid_change(int grid1[3][3])
{
	int i = 0;
	int j = 0;
	int gridx[3][3];

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			gridx[i][j] = 0;
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (grid1[i][j] > 3)
			{
				grid1[i][j] = grid1[i][j] - 4;
				if ((i - 1) >= 0 && (i - 1) < 3)
					gridx[i - 1][j] += 1;
				if ((j - 1) >= 0 && (j - 1) < 3)
					gridx[i][j - 1] += 1;
				if ((i + 1) >= 0 && (i + 1) < 3)
					gridx[i + 1][j] += 1;
				if ((j + 1) >= 0 && (j + 1) < 3)
					gridx[i][j + 1] += 1;
			}
		}
	}
	grid_sum(grid1, gridx);
}
