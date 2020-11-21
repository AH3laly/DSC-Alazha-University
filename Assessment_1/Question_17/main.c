/**
 * DSC Assessment 1
 * Solution By Abdelrahman Helaly <AH3laly@gmail.com>
 */

// Question 17:
// Write a program to count number of digits in a decimal number.

#include <stdio.h>
#include <stdbool.h>

int main(){
    int theNumber, theNumberCount = 0, theFractionCount = 0, temp;
    long double input, theFraction;
    bool pointDetected = false;
    char c;
    
    // Prompt the user to enter a decimal number
    printf("Enter a decimal number, Ex: 2367632.4387284: ");

    while((c = getchar()) != '\n'){
        if((int)c == 46){
            pointDetected = true;
        } else if(pointDetected){
            theFractionCount++;
        } else {
            theNumberCount++;
        }
    }
    
    printf("Integer Digits: %d\n", theNumberCount);
    printf("Fraction Digits: %d\n", theFractionCount);
    printf("Total Digits: %d\n", theNumberCount + theFractionCount);
    return 0;
}
