//Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include <stdio.h>

int main() {
    int n = 5; 
    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        double numerator = 2.0 * i;
        double denominator = 4.0 * i - 1;
        sum = sum + (numerator / denominator);
    }
    printf("Approx sum: %.2f\n", sum);

    return 0;
}
