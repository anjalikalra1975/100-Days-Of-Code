/*Q139: Show that enums store integers by printing assigned values.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
SUCCESS=0, FAILURE=1, TIMEOUT=2

*/
#include <stdio.h>

enum Example { X, Y, Z };

int main() {
    printf("X = %d\n", X);
    printf("Y = %d\n", Y);
    printf("Z = %d\n", Z);
    return 0;
}
