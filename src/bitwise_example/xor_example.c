#include <stdio.h>

int main (void) {
    int a = 4, b = 3;
    a = a ^ b;
    printf("After XOR a ^ b, a = %d and b = %d\n", a, b);
    b = b ^ a;
    printf("After XOR b ^ a, a = %d and b = %d\n", a, b);
    a = a ^ b;

    printf("After XOR, a = %d and b = %d\n", a, b);
    return 0;
}