#include <stdio.h>
#include <stdlib.h>

/* int total;

int Square(int x)
{
    return x*x;
}

int SquareOfSum(int x, int y)
{
    int z = Square(x+y);
    return z;
}

int main() 
{
    int a = 4, b =8;
    total = SquareOfSum(a,b);
    printf("Output = %d\n", total);
} */

int main()
{
    int a; // goes to stack
    int *p;
    printf("stack address of pointer p = %p\n\n", (void*)&p);
    p = (int*)malloc(sizeof(int));
    printf("heap address where pointer p points to = %p\n", (void*)p);
    *p = 10;
    printf("value stored at %p in the heap is %d\n", (void*)p, *p);
    free(p);
    // printf("value stored at %p in the heap is %d\n\n\n", (void*)p, *p); // don't do that - may crash
    printf("stack address of pointer p = %p\n\n", (void*)&p);
    p = (int*)malloc(sizeof(int));
    printf("heap address where pointer p now points to = %p\n", (void*)p);
    *p = 20;
    printf("value stored at %p in the heap is %d\n", (void*)p, *p);
    free(p);
    // printf("value stored at %p in the heap is %d\n", (void*)p, *p); // don't do that - may crash
}
