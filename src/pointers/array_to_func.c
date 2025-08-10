#include <stdio.h>

int SumOfAllElements (int* A, int size_of_array) // int A[] or int* A - arrays are always called by reference
 {

    int i, sum = 0;
    
    // printf("SOE - Size of A = %d, size of A[0] = %d\n", sizeof(A), sizeof(A[0]));
    // printf("SOE - Address of A is %d\n", A);
    for (i = 0; i < size_of_array; i++)
    
    {
        // sum = sum + A[i];
        sum+= A[i];
    }

    return sum;
    
}

void DoubleAllElements (int* A, int size_of_array) {

    int i = 0;
    // int product = 0;

    for ( i = 0; i < size_of_array; i++)
    {
        A[i] = A[i] * 2;
        // printf("A[i] is %d\n", A[i]);
    }
    
}

// ToDo DoubleAllElements function

int main () {

    int A [] = {1, 2, 3, 4, 5};
    int size_of_array = sizeof(A)/sizeof((A[0]));
    int total = SumOfAllElements(A, size_of_array);
    printf("A[0] before calling DoubleAllElements is %d\n\n", A[0]);
    DoubleAllElements(A, size_of_array);

    printf("The sum of all elements is %d\n\n", total);
    printf("A[0] after calling DoubleAllElements is %d\n", A[0]);
    // printf("Main - Size of A = %d, size of A[0] = %d\n", sizeof(A), sizeof(A[0]));
    // printf("Main - Address of A is %d\n", A);
}