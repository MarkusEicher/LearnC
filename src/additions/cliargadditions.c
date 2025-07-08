#include <stdio.h>
#include <stdlib.h>  // For atoi() function to convert strings to integers

int main(int argc, char *argv[]) {
    // Check if there are enough arguments (the program name is included in argc)
    if (argc != 3) {
        printf("Error: Please provide exactly two numbers.\n");
        return 1; // Exit if arguments are incorrect
    }

    // Convert command line arguments to integers
    int num1 = atoi(argv[1]); // Convert the first argument to an integer
    int num2 = atoi(argv[2]); // Convert the second argument to an integer

    // Perform the addition
    int sum = num1 + num2;

    // Print the result
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);

    return 0;
}