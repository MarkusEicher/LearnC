#include <stdio.h>

void main()
{
    /* int a = 5;
    int *p;
    p = &a;
    // *p = 6;
    printf("p %d\n", p);
    printf("p %d\n", &a); */

    /* 
    // Explained a bit deeper
    int a = 1025;
    int *p;
    p = &a;
    printf("The size of an int is %zu bytes\n", sizeof(int));
    printf("p is pointing to the address of a (&a) which is = %d\nThe value stored there is an integer as defined in (int a = 1025)\n(This is 00000000 00000000 00000100 00000001 in binary) and equals to = %d\n", p, *p);
    printf("If we are adding 1 (pointer arithmetic) to the current address of p which was %d,\nthis moves this address to %d (last address plus 4 bytes),\nThe value stored there is unpredictable and it is %d\n\n",p, p+1, *(p+1));
    char *p0;
    p0 = (char*)p; //typecasting
    printf("The size of a char is %zu bytes\n", sizeof(char));
    printf("p0 is pointing to the address of p (that itself points to &a) and is = %d\nThe pointer p0 in this case was typecasted to a character pointer with (p0 = (char*)p)\nThe value stored there before typecasting is 00000000 00000000 00000100 00000001 in binary\nSince char is only 1 byte, only the last octet of the binary representation is used, which means 00000001\nwhat gives us a value of = %d\n", p0, *p0);
    printf("If we are adding 1 (pointer arithmetic) to the current address of p0 which was %d,\nthis moves this address to %d (last address plus 1 byte),\nThe value stored there is the second byte of 00000000 00000000 00000100 00000001 in binary which is %d\n\n", p0, p0+1, *(p0+1));
    // Some checks to understand
    printf("The value of a is %d\n", a);
    printf("The address of a (&a) is %d\n", &a);
    // *p0 = 'A';
    // printf("Now the value of a is %d\n", a);
    // printf("Now the address of a (&a) is %d\n", &a);
 */

 
    int x = 5;
    int* p = &x;
    *p = 6;
    int** q = &p;
    int*** r = &q;
    printf("%d, %d, %d, %d\n", x, p, q, r);

    printf("%d\n", *p);
    printf("%d\n", *q);
    printf("%d\n", **q);
    printf("%d\n", **r);
    printf("%d\n", ***r);
    ***r = 10;
    printf("x = %d\n", x);
    **q = *p +2;
    printf("x = %d\n", x);


}



