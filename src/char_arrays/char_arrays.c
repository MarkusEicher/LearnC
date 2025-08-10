#include <stdio.h>
#include <string.h>

void print_char_array (char* A) {

    int counter = 0;
    // printf("First char is %c\n", A[counter]);    

    /* while (A[counter] != '\0') 
    {
        printf("%c", A[counter]);
        counter++;
    }
    
    // alternative way to do it*/

    while (*A != '\0')  
    {
        printf("%c", *A);
        A++;
    }
    printf("\n");
}

int main () {

    // initializing a char array with single chars
    char C[20];
    C[0] = 'J';
    C[1] = 'O';
    C[2] = 'H';
    C[3] = 'N';
    C[4] = '\0';
    int string_length= strlen(C);
    printf("%s\n", C);
    printf("The string length is %d\n\n", string_length);

    // initializing a string literal on one line
    char D[] = "KUNIGUNDE"; // the zero char is added automatically
    int length_d = strlen(D);
    printf("The string is %s\n", D);
    printf("The size in bytes is %d\n", sizeof(D));
    printf("The string length is %d\n\n", length_d);
    
    // alternative method - needs entering the zero char
    char E[] = {'A', 'N', 'N', 'A', '\0'}; 
    int length_e = strlen(E);
    printf("The string is %s\n", E);
    printf("The size in bytes is %d\n", sizeof(E));
    printf("The string length is %d\n\n", length_e);

    char F[] = "Stratosphere";
    printf("The function print_char_array has printed the following string\n");
    print_char_array(F);
}