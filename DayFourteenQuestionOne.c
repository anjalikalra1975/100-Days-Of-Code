//Q27: Write a program to print the sum of the first n odd numbers.
#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        sum = sum+(2*i + 1); 
    }
    printf("%d\n", sum);

    return 0;
}
