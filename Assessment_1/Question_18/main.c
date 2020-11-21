/**
 * DSC Assessment 1 - Course 1 - Session 2.1
 * Solution By: Abdelrahman Helaly <AH3laly@gmail.com> <github.com/AH3laly>
 */

// Question 18:
// Write a program to display half pyramid using stars pattern.
// *
// * *
// * * *
// * * * *
// * * * * *

#include <stdio.h>

// We can change the pyramid size here
#define PYRAMID_SIZE 5

int main(){

    int r, c, rows = PYRAMID_SIZE;
    
    for(r=1; r<=rows; r++){
        for(c=1; c<=r; c++){
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}
