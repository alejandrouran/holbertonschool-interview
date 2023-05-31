#!/usr/bin/python3
""" Rotate 2D Matrix function """


def rotate_2d_matrix(matrix):
    """ Rotate a 2D matrix """
    n = len(matrix)

    for i in range(n):
        for j in range(i + 1, n):
            matrix[1][j], matrix[j][i] = matrix[j][i], matrix[i][j]

    for i in range(n):
        matrix[i] = matrix[i][::-1]
