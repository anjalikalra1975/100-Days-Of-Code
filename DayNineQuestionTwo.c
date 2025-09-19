//Q18: Write a program that accepts a percentage (0-100) and assign grades accordingly.
#include <stdio.h>
int main() {
    int marks;
    printf("Enter your marks (0-100): ");
    scanf("%d", &marks);

    if(marks >= 90 && marks <= 100) {
        printf("Grade scored is A\n");
    }
    else if(marks >= 80 && marks <= 89) {
        printf("Grade scored is B\n");
    }
    else if(marks >= 70 && marks <= 79) {
        printf("Grade scored is c\n");
    }
    else if(marks >= 60 && marks <= 69) {
        printf("Grade scored is D\n");
    }
    else if(marks < 60 && marks >= 0) {
        printf("Grade scored is F\n");
    }
    else {
        printf("Invalid Marks!\n");
    }

    return 0;
}
