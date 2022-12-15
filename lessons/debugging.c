Task 0
-create a main.h file with the content below

#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

void positive_or_negative(int i);
int largest_number(int a, int b, int c);
int convert_day(int month, int day);
void print_remaining_days(int month, int day, int year);

#endif /* MAIN.H */

-create a 0-main.c file with the content below..

#include "main.h"

/**
 * main - tests function that prints if integer is positive or negative
 * Return: 0
 */

int main(void)
{
	int i;

	i = 0;
	positive_or_negative(i);

	return (0);
}

That's all u need for task 0..
Note: the prototypes for task1-3 has already been included in the main.h file above no need to include them again..

Task 1
For this you've been given a file named 1-main.c 
They said you should comment out the part making it an infinite loop.. 

If u look closely at the code I as been assigned value 0 a d it says while i<10 it should print something.. 
This will always be true since the value of I was incremented (I++)
T
So all u need to do is to turn that part of the code into a comment(it could be block comment /* */ or line comment /*  */)
Here's how ur code should look

-create a file 1-main.c with the following 

#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: 0
 */

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	/while (i < 10)/
	/{/
	/putchar(i);/
	/}/

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}

Task 2

For this you've been given a code that's not giving the correct output I believe some of us can attempt this one ourselves.. 
U just have to modify the statements to get the correct output.. this should work 

-create a file 2-largest_number.c

#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}


Task 3

This is a bit technical most of us who aren't that great in maths would definitely have a hard time figuring it out 
They gave a code that outputs number of days remaining in a year but it doesn't output correctly in a leap year.
For this u first need to know how frequent does leap year occur(4yrs) 
How many days In a leap year(366)
With those 2 details and an understanding of using modulus operator you're all good.. 

This is one way to solve it.. 
You can though crack ur brain to come up with a different way.. 

-create a file  3-print_remaining_days.c

#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 *
 * Return: void
 */

void print_remaining_days(int month, int day, int year)
{
	if (year % 4 == 0 || ((year % 100 == 0) && (year % 400 == 0)))
	{
		if (month > 2 && day >= 60)
		{
			day++;
		}

		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
		if (month == 2 && day == 60)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 365 - day);
		}
	}
}
