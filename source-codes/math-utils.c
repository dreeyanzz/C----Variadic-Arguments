#include "../headers/math-utils.h"

int Add_Values(int count, ...)
{
    va_list args;
    int sum = 0;

    va_start(args, count);

    for (int i = 0; i < count; i++)
        sum += va_arg(args, int);

    va_end(args);

    return sum;
}

int Add_Array(int count, int *numbers)
{
    int sum = 0;

    for (int i = 0; i < count; i++)
        sum += numbers[i];

    return sum;
}