/**
 * DSC Assessment 1 - Course 1 - Session 2.1
 * Solution By: Abdelrahman Helaly <AH3laly@gmail.com> <github.com/AH3laly>
 */

// Question 13:
// Write a program that reads a positive integer and checks if it is a prime.

#include <stdio.h>
#include <stdbool.h>

#define limit 10

int main(){

    int i, input;
    bool isPrime = 1; // Asume the number is prime
    
    printf("Enter a positive number: ");
    scanf("%d", &input);

    for(i=input-1; i>=2; i--){
        if(input % i == 0){
            isPrime = 0; // Then the number is not prime
            break; // No need to continue the loop
        }
    }

    if(isPrime){
        printf("The number %d is a Prime number\n", input);
    } else {
        printf("The number %d is NOT a Prime number\n", input);
    }
    return 0;
}
