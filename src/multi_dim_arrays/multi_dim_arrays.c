#include <stdio.h>

int main() 
{
    int C[3] [2] [2] = {{{2,5}, {7,9}},
                        {{3,4}, {6,1}},
                        {{0,8}, {11,13}}};

    // int (*p) [2] [2] = C;
    
    // printf("%d %d %d\n", C[0], C[1], C[2]);
    // printf("%d\n", C[0] [0]);
    printf("%d %d %d %d\n", C, *C, C[0], &C[0][0]);
    printf("%d\n", C[0]);
    printf("%d\n", C[1]);
    printf("%d\n", C[2]);
    printf("%d\n", C[2][0][3]);
}