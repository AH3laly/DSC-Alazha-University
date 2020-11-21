/**
 * DSC Assessment 1
 * Solution By Abdelrahman Helaly <AH3laly@gmail.com>
 */

// Question 11:
// Print sum of first 100 integers. (With data validation)


#include <stdio.h>

#define limit 100

int main(){
    
    int i, numsum;
    for(i=1; i<=limit; i++){
        numsum+=i;
    }

    printf("The sum of the first %d numbers is: %d\n", limit, numsum);
    return 0;
}