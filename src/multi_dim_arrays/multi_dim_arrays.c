#include <stdio.h>

void Func1Dim(int *A) // Func get 1 dimensional array
{
    printf("Hello from Func1Dim\n\n");
}

// void Func2Dim(int (*B) [3]) // Func gets 2 dimensional array
void Func2Dim(int B[][3]) // alternative Func gets 2 dimensional array
{
    printf("Hello from Func2Dim\n\n");
}


int main() 
{
    int C[3] [2] [2] = {{{2,5}, {7,9}},
                        {{3,4}, {6,1}},
                        {{0,8}, {11,13}}};
    
    int A[] = {1,2};
    Func1Dim(A);

    int B[2] [3] = {{2,4,6}, 
                    {5,7,8}};
    Func2Dim(B);

    int (*p) [2] [2] = C;
    
    // printf("%d %d %d\n", C[0], C[1], C[2]);
    // printf("%d\n", C[0] [0]);
    printf("%d %d %d %d %d\n", C, *C, C[0], &C[0][0], p);
    printf("%d\n", C[0]);
    printf("%d\n", C[1]);
    printf("%d\n", C[2]);
    printf("%d\n\n", C[0][0][1]);

    #define TYPEOF(x) _Generic((x), \
    int: "int", \
    int *: "int *", \
    int **: "int **", \
    int (*)[2]: "int (*)[2]", \
    int (*)[2][2]: "int (*)[2][2]", \
    int [2][2]: "int [2][2]", \
    int [3][2][2]: "int [3][2][2]", \
    default: "unknown")

    printf("Typ von C: %s\n", TYPEOF(C));
    printf("Typ von *C: %s\n", TYPEOF(*C));
    printf("Typ von C[0]: %s\n", TYPEOF(C[0]));
    printf("Typ von &C[0][0]: %s\n", TYPEOF(&C[0][0]));
    printf("Typ von p: %s\n\n", TYPEOF(p));

    printf("Adresse von C: %p\n", (void*)C);
    printf("Adresse von *C: %p\n", (void*)*C);
    printf("Adresse von C[0]: %p\n", (void*)C[0]);
    printf("Adresse von &C[0][0]: %p\n", (void*)&C[0][0]);
    printf("Adresse von p: %p\n\n", (void*)p);

    int x = 10;
    int *px = &x;

    printf("Adresse von int *px = &x mit %%d (potentially undefined): %d\n", px);              // ❌ Falsch
    printf("Adresse von int *px = &x mit %%p (correct): %p\n", (void*)px);       // ✅ Richtig


    
}