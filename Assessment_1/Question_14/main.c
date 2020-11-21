/**
 * DSC Assessment 1
 * Solution By Abdelrahman Helaly <AH3laly@gmail.com>
 */

// Question 14:
// Write a program to display English alphabets from A to Z.


#include <stdio.h>

#define limit 10

int main(){

    char c;
    
    for(c = 'A'; c <= 'Z'; c++){
        printf("%c ", c);
    }
    
    printf("\n");

    return 0;
}
