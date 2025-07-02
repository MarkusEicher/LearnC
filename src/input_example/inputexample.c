#include <stdio.h>
#include <string.h>

void main () {

    int age = 0;
    float gpa = 0.00f;
    char grade = '\0';
    char name[30];

    printf("Please enter your age: ");
    scanf("%d", &age);
    printf("Please enter your gpa: ");
    scanf("%f", &gpa);
    printf("Please enter your grade: ");
    getchar();
    scanf("%c", &grade);
    printf("Please enter your name: ");
    getchar();
    // scanf("%s", &name);
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;  // entfernt das newline, wenn vorhanden


    printf("Your name is %s, you are %d years old.\n", name, age);
    printf("Your GPA is %.2f and your grade is %c.\n", gpa, grade);

}