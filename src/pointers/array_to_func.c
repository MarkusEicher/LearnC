#include <stdio.h>

int SumOfAllElements (int* A, int size_of_array) // int A[] or int* A - arrays are always called by reference
 {

    int i, sum = 0;
    
    printf("SOE - Size of A = %d, size of A[0] = %d\n", sizeof(A), sizeof(A[0]));
    printf("SOE - Address of A is %d\n", A);
    for (i = 0; i < size_of_array; i++)
    
    {
        // sum = sum + A[i];
        sum+= A[i];
    }

    return sum;
    
}

// ToDo DoubleAllElements function

int main () {

    int A [] = {1, 2, 3, 4, 5};
    int size_of_array = sizeof(A)/sizeof((A[0]));
    int total = SumOfAllElements(A, size_of_array);
    printf("The sum of all elements is %d\n", total);
    printf("Main - Size of A = %d, size of A[0] = %d\n", sizeof(A), sizeof(A[0]));
    printf("Main - Address of A is %d\n", A);
}