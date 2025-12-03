/*2.Declare a local variable inside a function and try to access it outside the function. 
Compare this with accessing the global variable from within the function. */

#include <stdio.h>

// Global variable
int globalVar = 50;

// Function prototype
void testFunction();

int main() {
    int localMain = 10; // Local variable in main()

    printf("Inside main(): globalVar = %d\n", globalVar);
    printf("Inside main(): localMain = %d\n", localMain);

    testFunction();

    // Trying to access local variable of testFunction (NOT allowed)
    // printf("Value of localTest in main() = %d\n", localTest); // ❌ ERROR

    return 0;
}

void testFunction() {
    int localTest = 20; // Local variable in testFunction()

    printf("Inside testFunction(): globalVar = %d\n", globalVar);
    printf("Inside testFunction(): localTest = %d\n", localTest);
}
