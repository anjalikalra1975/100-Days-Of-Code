/*1.Declare a global variable outside all functions 
and use it inside various functions to understand its accessibility.*/

#include <stdio.h>

// Global variable declaration
int globalVar = 10;

// Function prototypes
void display();
void modify();

int main() {
    printf("Inside main(): globalVar = %d\n", globalVar);
    display();
    modify();
    printf("Back to main(): globalVar = %d\n", globalVar);

    return 0;
}

void display() {
    printf("Inside display(): globalVar = %d\n", globalVar);
}

void modify() {
    globalVar = 15; // modifying global variable
    printf("Inside modify(): globalVar = %d\n", globalVar);
}
