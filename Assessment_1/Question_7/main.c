/**
 * DSC Assessment 1
 * Solution By Abdelrahman Helaly <AH3laly@gmail.com>
 */

// Question 7:
// Write a program that print the relation between two
// integer number if those numbers are equal, not equal and
// which one contain the higher value.

#include <stdio.h>

int main(){
    int theSmallest, nums[3], i;
    // Prompt the user to enter three numbers
    printf("Enter the first number: ");
    scanf("%d", &nums[0]);
    
    printf("Enter the second number: ");
    scanf("%d", &nums[1]);

    printf("Enter the third number: ");
    scanf("%d", &nums[2]);

    // Suppose that the first number is the smallest
    theSmallest = nums[0];
    for(i=1; i<=2; i++){
        if(nums[i] < theSmallest){
            theSmallest = nums[i];
        }
    }
    printf("The smallest number is: %d\n", theSmallest);

    return 0;
}
