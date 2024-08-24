#include <stdio.h>

#define MAX_IDS 32

int main(){
    int ids[MAX_IDS] = {0,1,2}; // Here, we initalize an array of 32 elements and so far, only the first three elements of the array are defined, the other 29 elements are all set to 0 by defalt

    

    printf("third element is: %d\n", ids[2]);
    // prints out "third element is: 2"
    ids[3] = 0x41;
    // here we assign to the fourth element of the array the value "0x41" which equals to 65
    printf("fourth element is: %d\n", ids[3]);
    // prints out "fourth element is: 65"
     printf("sixteenth element is: %d\n", ids[15]);
    // prints out "sixteenth element is: 0"
}