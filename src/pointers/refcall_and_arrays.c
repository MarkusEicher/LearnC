#include <stdio.h>

void Increment (int *p) {
    *p = *p +1;
}

int main () {
    // int a;
    // a = 10;
    // Increment(&a);
    // printf("a = %d\n", a);

    int A[] = {2, 3, 4, 5, 6};
    printf("We defined an array as 'int A[] = {2, 3, 4, 5, 6};'\n\n");
    printf("Using printf with A  gives us %d\n", A);
    printf("Using printf with &A[0]  gives us %d\n", &A[0]);
    printf("Using printf with A[0]  gives us %d\n", A[0]);
    printf("Using printf with *A  gives us %d\n\n", *A);

    for ( int i = 0; i < 5; i++)
    {
        printf("Looping through the array with 'for ( int i = 0; i < 5; i++)'\n");
        printf("Index i is %d\n", i);
        printf("Address = %d\n", &A[i]);
        printf("Address = %d\n", A+i);
        printf("Value = %d\n", A[i]);
        printf("Value = %d\n\n", *(A+i));
    }
    
}


