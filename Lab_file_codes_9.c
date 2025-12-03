//1.Write a program to define some constant variable in preprocessor.

#include <stdio.h>

#define PI 3.14  // Defining constant using preprocessor

int main() {
    float r = 5;
    float area =  PI * r * r;
    printf("Area of Circle = %.2f\n", area);

    return 0;
}
