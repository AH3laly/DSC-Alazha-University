/**
 * DSC Assessment 1 - Course 1 - Session 2.1
 * Solution By: Abdelrahman Helaly <AH3laly@gmail.com> <github.com/AH3laly>
 */

// Question 20:
// Write a program to display a full pyramid using stars pattern.
//     *
//    ***
//   *****
//  *******
// *********

#include <stdio.h>

// We can change the pyramid size here
#define PYRAMID_BASE_SIZE 9

int main(){
    int indents, stars, levels, r, c, s;

    indents = PYRAMID_BASE_SIZE / 2;
    stars = 1;
    levels = indents + 1;

    for(r=1; r<=levels; r++){
    
        for(c=1; c<=indents; c++){ // Print the Indentations
            printf(" ");
        }
        for(s=1; s<=stars; s++){ // Print Stars
            printf("*");
        }
        
        indents--;
        stars+=2;
        printf("\n");
    }
    return 0;
}
