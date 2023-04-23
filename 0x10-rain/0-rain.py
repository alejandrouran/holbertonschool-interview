#!/usr/bin/python3
"""Given a list of non-negative integers representing
   the heights of walls with unit width 1
"""


def rain(walls):
    """
    walls is a list of non-negative integers.
    Return: Integer indicating total amount of rainwater retained.
    """
    n = len(walls)
    total_water = 0

    for i in range(1, n - 1):
        left = walls[i]
        for j in range(i):
            left = max(left, walls[j])
        right = walls[i]

        for j in range(i + 1, n):
            right = max(right, walls[j])

        total_water = total_water + (min(left, right) - walls[i])
    return total_water
