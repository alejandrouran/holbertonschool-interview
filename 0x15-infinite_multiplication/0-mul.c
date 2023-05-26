#include "holberton.h"

/**
 * validate_input - input numbers of the operations
 * @num1: number one for the operation
 * @num2: number two for the operation
 * Return: void
 */
int validate_input(char *num1, char *num2) {
    for (int i = 0; num1[i] != '\0'; i++) {
        if (!isdigit(num1[i])) {
            return 0;
        }
    }

    for (int i = 0; num2[i] != '\0'; i++) {
        if (!isdigit(num2[i])) {
            return 0;
        }
    }

    return 1;
}

/**
 * multiply_numbers - numbers of the operations
 * @num1: number one of the operation
 * @Num2: number two of the operation
 * Retun: void
 */

int multiply_numbers(char *num1, char *num2) {
    int result = atoi(num1) * atoi(num2);
    return result;
}

/**
 * main - operations
 * @argc: arguments vaule
 * @argv: arguments count
 * Return: void
 */
int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Error\n");
        return 98;
    }

    char *num1 = argv[1];
    char *num2 = argv[2];

    if (!validate_input(num1, num2)) {
        printf("Error\n");
        return 98;
    }

    int result = multiply_numbers(num1, num2);
    printf("%d\n", result);

    return 0;
}
