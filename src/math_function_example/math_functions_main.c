#include <stdio.h>
#include "math_functions.h"  // Include the function header file

int main() {
    int num1 = 5, num2 = 10;
    int sum = add(num1, num2);  // Call function from another file
    printf("Sum: %d\n", sum);
    return 0;
}