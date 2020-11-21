/**
 * DSC Assessment 1 - Course 1 - Session 2.1
 * Solution By: Abdelrahman Helaly <AH3laly@gmail.com> <github.com/AH3laly>
 */

// Question 15:
// Write a program to calculate the power of a number.
// The number and its power are input from user.


#include <stdio.h>

int main(){

    int num, exponent, result = 1, i;
    
    printf("Enter a Number and the Exponent Ex: 10 15: ");
    scanf("%d %d", &num, &exponent);

    for(i=1; i<=exponent; i++){
        result*=num;
    }

    printf("The Exponent %d of the number %d is %d\n", exponent, num, result);

    return 0;
}
