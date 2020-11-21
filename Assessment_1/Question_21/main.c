/**
 * DSC Assessment 1 - Course 1 - Session 2.1
 * Solution By: Abdelrahman Helaly <AH3laly@gmail.com> <github.com/AH3laly>
 */

// Question 21:
// Write a program to display cross or X-shape using stars pattern.
// *         *
//  *       *
//   *     *
//    *   *
//     * *
//     * *
//    *   *
//   *     *
//  *       *
// *         *

#include <stdio.h>

// We can change the size of the shape here
#define SHAPE_SIZE 10

int main(){
    int width, height, r, c, star1, star2;
    width = SHAPE_SIZE;
    
    if(SHAPE_SIZE % 2 == 0){ // I Like the number to be odd
        width+=1;
    }
    height = width;
    star1=1;
    star2=width;
    
    for(r=1; r<=height; r++){
        if((star1 - star2) == 0){
            star1++;
            star2--;
            continue;
        }
        for(c=1; c<=width; c++){
            if(c == star1 || c == star2){
                printf("*");
            } else {
                printf(" ");
            }
        }
        star1++;
        star2--;
        printf("\n");
    }
    return 0;
}
