#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "headers/math-utils.h"
#include "headers/input-utils.h"

int main(void)
{
    int count;
    int *numbers;

    count = GetInt("Enter number of numbers to add: ", "Please enter a valid integer for the count.\n\n");

    numbers = (int *)malloc(count * sizeof(int));
    if (numbers == NULL)
    {
        fprintf(stderr, "Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < count; i++)
        numbers[i] = GetInt("Enter number: ", "Please enter a valid integer.\n\n");

    int sum = Add(count, numbers);

    printf("The sum is: %d\n", sum);

    return 0;
}