//Q59: Count even and odd numbers in an array.

#include <stdio.h>

int main() {
    int n, i, even = 0, odd = 0;

    // Read number of elements
    scanf("%d", &n);
    int arr[n];

    // Read array elements and count even/odd
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    // Print results
    printf("Even=%d, Odd=%d\n", even, odd);

    return 0;
}