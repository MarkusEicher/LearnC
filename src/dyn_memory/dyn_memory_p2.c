#include <stdio.h>
#include <stdlib.h>

int main ()

{
    int n;
    printf("Enter size of array\n");
    scanf("%d", &n);
    int *A = (int*)malloc(n*sizeof(int)); //malloc version
    // int *A = (int*)calloc(n, sizeof(int)); //calloc version
    
    for(int i = 0; i < n; i++) 
    {
        A[i] = i+1;
    }

    // using free here can cause a ton of problems
    // f20
    // Free(A);
    // A = NULL;

    // realloc goes here
    int *B = (int*)realloc(A, 2*n*sizeof(int));
    printf("Previous block address = %d, new block address = %d\n", A, B);

    // for(int i = 0; i <n; i++)
    // {
    //     printf("%d ", A[i]);
    // }
    // printf("\n");

    for(int i = 0; i <2*n; i++)
    {
        printf("%d\n", B[i]);
    }
    printf("\n");
}