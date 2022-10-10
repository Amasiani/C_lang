#include <stdio.h>
#include <stdlib.h>

int main()
{
    char card_name[3];
    puts("Enter the card_name: ");
    scanf("%s2", card_name);
    int val = 0;
    if (card_name[0] == 'K'){
        val = 10;
    }else if(card_name[0] == 'Q'){
        val = 10;
    }else if(card_name[0] == 'J'){
        val = 10;
    }else if(card_name[0] == 'A'){
        val = 11;
    }else {
        val = atoi(card_name);
    }

    if ((val > 2) && (val < 6)){
        puts("Count has gone up!!!");
    }
    else if (val == 10){
        puts("Counts has gone down!!!");
    }
    printf("The card value is: %i\n", val);

    int x = 0;
    int y = 0;
     while(x < 5){
        y = x - y;
        printf("%i%i ", x ,y);
        x = x + 1;
     }
    int z = 0;
    int k = 0;
     while (k < 5){
        /* code */
        z = k + z;
        printf("\n%i%i \n", k, z);
        k = k +1;
     }
     

    int squares_array[5], square, total;

   int nums_array[5] = {2,4,6,8,10};
//    for (int i=0; i<5; ++i){
//         square = nums_array[i] * nums_array[i];
//         printf("Sum of the squares of the numbers: %d\n", square);
//         squares_array[square];
//         total = 0;
//         for (int x=0; x < 5; ++x){
//             total += squares_array[x];
//             }
        
//    }

    for (int i=0; i<5; ++i){
        square = nums_array[i] * nums_array[i];
        // printf("%d ", square);
        for (int z=0; z<5; ++z){
            total = 0;
            total += square[z]; //error fix
        }
    }
    
    // example of a running sum and position
    
    int array[50], position, c, n, value;
    printf("\nEnter number of elements in the array\n");
    scanf("%d", &n);

    printf("Enter %d elements\n", n);

    for (c=0; c < n; c++)
        scanf("%d", &array[c]);

    printf("Please enter the location where you want to insert an new element\n");

    scanf("%d", &position);

    printf("Please enter the value\n");
    scanf("%d", &value);

    for (c = n-1; c >= position - 1; c--)
        array[c+1] = array[c];

    array[position-1] = value;

    printf("Resultant array is\n");

    for (c =0; c <= n; c++)
        printf("%d\n", array[c]); 

    return 0;
}