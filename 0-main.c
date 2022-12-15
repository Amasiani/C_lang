#include <stdio.h>
#include "function_pointers.h"

void print_name(char *name, void (*f)(char *))
{
    if (name && f)
        f(name);
}

void print_name_as_is(char *name)
{
    printf("Hello, my name is %s\n", name);
}

void print_name_uppercase(char *name)
{
    unsigned int i;

    printf("Hello, my uppercase name is ");
    i = 0;
    while (name[i])
    {
        if (name[i] >= 'a' && name[i] <= 'z')
        {
            putchar(name[i] + 'A' - 'a');
        }
        else
        {
            putchar(name[i]);
        }
        i++;
    }
}

int main(void)
{
    
    int LA[] = {1,3,5,7,8};
    int item = 10, k = 5, n = 5;
    int i = 0, j = n;

    printf("Original array elements are: \n");

    for (i = 0; i<n; i++)
    {
        printf("LA[%d] = %d \n", i, LA[i]);
    }

    n = n + 1;
    
    //shifts the array
    while (j >= k)
    {
        LA[j + 1], LA[j];
        j = j - 1;
        //j--;
    }

    LA[k] = item;

    for (i = 0; i<n; i++)
    {
        printf("LA[%d] = %d \n", i, LA[i]);
    }
    print_name("Emeka", print_name_as_is);
    print_name("Emeka", print_name_uppercase);
    printf("\n");
    return (0);
}