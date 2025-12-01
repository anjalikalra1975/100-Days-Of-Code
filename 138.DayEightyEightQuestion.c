/*Q138: Print all enum names and integer values using a loop.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2

*/
#include <stdio.h>

enum Color { RED, BLUE, GREEN, YELLOW, PINK };

int main() {
    enum Color c;

    for (c = RED; c <= PINK; c++) {
        printf("%d ", c);
    }

    return 0;
}
