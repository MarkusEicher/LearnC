#include <stdio.h>

int main() {
    // Declare integer variables
    int num1, num2, sum;

    // Declare pointers to hold the addresses of num1, num2, and sum
    int *ptr1, *ptr2, *ptrSum;
    

    // Ask the user for the first number
    printf("Enter the first number: ");
    scanf("%d", &num1);

    // Ask the user for the second number
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Assign the addresses of num1, num2, and sum to the pointers
    ptr1 = &num1;
    ptr2 = &num2;
    ptrSum = &sum;

    // Use the pointers to add the numbers
    *ptrSum = num1 + num2;

    // Print the result
    printf("The sum of %d and %d is: %d\n", num1, num2, *ptrSum);

    return 0;
}