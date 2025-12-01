/*Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/
#include <stdio.h>

enum Menu { ADD = 1, SUBTRACT, MULTIPLY };

int main() {
    int choice, a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("1.ADD 2.SUBTRACT 3.MULTIPLY\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case ADD: printf("Sum = %d\n", a + b); break;
        case SUBTRACT: printf("Difference = %d\n", a - b); break;
        case MULTIPLY: printf("Product = %d\n", a * b); break;
        default: printf("Wrong Choice\n");
    }
    return 0;
}
