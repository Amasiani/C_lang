#include <stdio.h>

/**
 * main - entry point
 * 
 * Description: print single digit number of base 10.
 * Return: Zero
*/

int main(void)
{
    int num = 0;
    while (num <= 10)
    {
        printf("%d\n", num);
        ++num;
    }
    int alb = 122;
    while ( alb > 96)
    {
        putchar(alb);
        --alb;
    }
    putchar('\n');

    int str[] ={95, 112, 117, 116, 99, 104, 97, 114};
    int count, sz;
     sz = sizeof(str) / sizeof(int);
     for(count= 0; count <sz; count++)
     {
        _putchar(str[count]);
     }
     _putchar('\n');
    return (0);
}