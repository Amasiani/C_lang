#include <stdio.h>
#include <ctype.h>


int main()
{
    int i;
    i = 9;
    while (--i)
    {
        printf("%d\n", i);
    }
    printf("--i, printed");
    printf("\n");

    int x = 10;
    while (--x)
    {
        printf("%d\n", x);
    }
    printf("--x printed");
    printf("\n");

    int y = 10;
    while (y--)
    {
        printf("%d\n", y);
    }
    printf("y--, printed");
    /**
    * int *n;
    * n = 10;
    * some_function(n);
    */
    return (0);
}

void some_function(int n)
{
    int count, space;

    for (count = 0; count < n; count++)
    {
        for (space = 0; space < count; space++)
        {
            putchar(0);
        }
        printf("%c\n", 92);
        if (n <= 0)
        {
            printf("%c", '0');
        }
    }
}