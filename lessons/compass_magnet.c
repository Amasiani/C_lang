#include <stdio.h>

/*
*learning pointer in C
*/

void go_south_east(int *lat, int *lon){
    *lat = *lat - 1;
    *lon = *lon -1;
}

int main()
{
    int latitude = 32;
    int longitude = -64;
    
    go_south_east(&latitude, &longitude);
    printf("Avatar now in  new location (%i %i)\n", latitude, longitude);
    printf("Size of a char: %lu\n", sizeof(char));
}