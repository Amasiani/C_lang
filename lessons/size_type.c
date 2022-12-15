 #include <stdio.h>
/*
 * main - this is the entry point of all C language source code.
 *
 * Descriptuion: 
 * Return: Zero for success and or value for failure
 */


int main(void)
{
printf("Size of a char: %lu byte(s)\n", sizeof(char));
printf("Size of an int: %lu byte(s)\n", sizeof(int));
printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
printf("Size of a float: %lu byte(s)\n", sizeof(float));
printf("Size of an unsigned int: %lu byte(s)", sizeof(unsigned int));
return (0);
}