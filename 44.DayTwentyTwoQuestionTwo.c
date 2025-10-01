//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>

int main() {
    int n = 5; 
    double sum = 0.0;

    for (int i = 1; i <= n; i++) {
        double term = (2.0 * i - 1) / (2.0 * i);
        sum = sum+term;
    }
    printf("Approx sum: %.1f\n", sum);

    return 0;
}
