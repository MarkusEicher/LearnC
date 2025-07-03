#include <stdio.h>

int addUsingBitwise(int a, int b) {
    // Iterate till there's no carry left
    while (b != 0) {
        int carry = a & b;      // Find carry bits
        a = a ^ b;              // Sum bits without carry
        b = carry << 1;         // Shift carry to left
    }
    return a;
}

int main() {
    int num1, num2, result;

    // Ask the user for two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Call function to perform addition using bitwise operators
    result = addUsingBitwise(num1, num2);

    // Print the result
    printf("The sum of %d and %d is: %d\n", num1, num2, result);

    return 0;
}