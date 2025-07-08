#include <stdio.h>

int main (void) {
// Checking if a number is a power of 2 with bitwise operation
int x = 512;
int r = x & (x -1);

printf("Checking if x (which is %d) is a power of 2\n\n", x);
printf("We are doing it by using the formula r = x & (x -1)...\n");
printf("If the outcome of the operation is 0 then it is a power of 2\n\n");
printf("This is O(1) order of 1\n\n");

if (x <= 0){
    printf("x (which is %d) IS NOT a power of 2\n", x);
    return 0;
}

if (r == 0) {
    printf("x (which is %d) IS a power of 2\n", x);
}else {
    printf("x (which is %d) IS NOT a power of 2\n", x);
}

return 0;
}