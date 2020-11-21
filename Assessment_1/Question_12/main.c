/**
 * DSC Assessment 1 - Course 1 - Session 2.1
 * Solution By: Abdelrahman Helaly <AH3laly@gmail.com> <github.com/AH3laly>
 */

// Question 12:
// Write a program that reads a positive integer and computes the factorial.


#include <stdio.h>

#define limit 10

int main(){

    int i;
    unsigned long long factorial = 1, input;
    
    printf("Enter a positive number: ");
    scanf("%llu", &input);

    for(i=1; i<=input; i++){
        factorial*=i;
    }

    printf("The Factorial of number %d is: %llu\n", input, factorial);
    return 0;
}
