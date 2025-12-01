//Q60: Count positive, negative, and zero elements in an array.

#include <stdio.h>

int main() {
    int n, i;
    int positive = 0, negative = 0, zero = 0;

    // Read number of elements
    scanf("%d", &n);
    int arr[n];

    // Read array elements and count
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > 0)
            positive++;
        else if (arr[i] < 0)
            negative++;
        else
            zero++;
    }

    // Print results
    printf("Positive=%d, Negative=%d, Zero=%d\n", positive, negative, zero);

    return 0;
}