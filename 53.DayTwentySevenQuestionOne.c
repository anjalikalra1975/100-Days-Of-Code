//Q53: Write a program to print the following pattern:

#include <stdio.h>

int main() {
    int n = 5; // number of rows in the top half
    int i, j;

    // Upper half of the pattern
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half of the pattern
    for(i = n - 1; i >= 1; i--) {
        for(j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
