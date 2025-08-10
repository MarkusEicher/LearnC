#include <stdio.h>
#include <string.h>

/* // exagerated naming of the pointer variable here
void print (char *im_a_pointer_to_the_array_from_the_calling_function)
{
    while (*im_a_pointer_to_the_array_from_the_calling_function != '\0')
    {
        printf("%c", *im_a_pointer_to_the_array_from_the_calling_function);
        im_a_pointer_to_the_array_from_the_calling_function++;
    }
    printf("\n");
} */

// Function print
void print (char *C)
{

    // C[0] = 'A'; // this is only possible whit a pointer to a char array in stack

    while (*C != '\0')
    {
        printf("%c", *C);
        C++;
    }
    printf("\n");
}

int main () 
{
    // char C[20] = "Hello"; // string is stored on stack in array C
    char *C = "Hello"; // string is stored at compile time in global memory immutable
    print(C);
}