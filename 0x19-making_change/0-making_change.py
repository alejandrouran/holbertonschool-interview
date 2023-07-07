#!/usr/bin/python3
""" Change comes from within """


def makeChange(coins, total):
    """
    Given a pile of coins of different values
    """

    if total <= 0:
        return 0
    temp_value = 0
    coins.sort(reverse=True)

    if total < 0:
        return 0

    coins_required = [float('inf')] * (total + 1)
    coins_required[0] = 0
    for i in range(1, total + 1):
        for coin in coins:
            if coin <= i:
                coins_required[i] = min(coins_required[i],
                                        coins_required[i - coin] + 1)

    if coins_required[total] == float('inf'):
        return -1

    return coins_required[total]
