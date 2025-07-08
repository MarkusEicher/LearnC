#include <stdio.h>

int main (void) {
// Checking if a number is even or odd with bitwise operation instead of using modulo
int x = 111;
int r = x & 1;

printf("Checking if x (which is %d) is even or odd\n\n", x);
printf("We are doing it by using the formula r = x & 1...\n");
printf("If the outcome of the operation is 0 then the least significant\n");
printf("bit is a zero, what means the given number is even, else it is odd.\n\n");
printf("This is O(1) order of 1\n\n");

if (r == 0) {
    printf("x (which is %d) is EVEN\n", x);
}else {
    printf("x (which is %d) is ODD\n", x);
}

return 0;
}