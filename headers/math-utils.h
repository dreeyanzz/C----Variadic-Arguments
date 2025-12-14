#ifndef MATH_UTILS_H

#define MATH_UTILS_H
#include <stdarg.h>

#define Add(count, first, ...) \
    _Generic((first),          \
        int *: Add_Array,      \
        default: Add_Values)(count, first, ##__VA_ARGS__)

int Add_Values(int count, ...);

int Add_Array(int count, int *numbers);

#endif // MATH_UTILS_H