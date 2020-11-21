/**
 * DSC Assessment 1 - Course 1 - Session 2.1
 * Solution By: Abdelrahman Helaly <AH3laly@gmail.com> <github.com/AH3laly>
 */

// Question 19:
// Write a program to display inverted half pyramid usingstars pattern.
// * * * * *
// * * * *
// * * *
// * *
// *

#include <stdio.h>

// We can change the pyramid size here
#define PYRAMID_SIZE 5

int main(){

    int r, c, rows = PYRAMID_SIZE;
    
    for(r=rows; r>=1; r--){
        for(c=1; c<=r; c++){
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}
