#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/** #include "variadic_functions.h" */

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);

int sum_them_all(const unsigned int n, ...)
{
    va_list nums;
    int sum1 = 0;
    int i;

    if (n == 0)
    {
        return (0);
    }

    va_start(nums, n);
    for (i = 0; i < n; i++)
        sum1 += va_arg(nums, int);
    /** va_end(nums); */
    va_end(nums);
    return (sum1);
}

void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list list;
    unsigned int i;
    int j;

    va_start(list, n);
    for (i = 0; i < n; i++)
    {
        j = va_arg(list, int);
        if (i < (n - 1) && separator != 0)
        {
            printf("%d%s", j, separator);
        }
        else
        {
            printf("%d", j);
        }
    }
    va_end(list);
    printf("\n");
}

int main(void)
{
    int _sum;

    _sum = sum_them_all(4, 6, 4, 6, 4);
    printf("Correct call1 expected result 20: %d\n", _sum);
    _sum = sum_them_all(6, 4, 6, 4, 6, 4, 6);
    printf("Correct call2, expected result 30: %d\n", _sum);
    /** wrong call of func sum_them_all() */
    _sum = sum_them_all(10, 4, 6, 4, 6, 6, 4, 6, 4);
    printf("Wrong call, expected resulted 40: %d\n", _sum);
    _sum = sum_them_all(10, 4, 6, 4, 6, 6, 4, 6, 4, 6, 4);
    printf("Corrected call, expected result 50: %d\n", _sum);
    print_numbers(", ", 4, 0, 98, -1024, 402);
    return (0);
}