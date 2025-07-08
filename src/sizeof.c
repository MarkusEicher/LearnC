#include <stdio.h>
#include <stdbool.h>

int main() {

    printf("Size of short integer is %zu\n", sizeof(short));
    printf("Size of long integer is %zu\n", sizeof(long));
    printf("Size of short integer is %zu\n", sizeof(int));

    printf("Size of float is %zu\n", sizeof(float));
    printf("Size of double is %zu\n", sizeof(double));
    printf("Size of long double is %zu\n", sizeof(long));
  
    return 0;
}