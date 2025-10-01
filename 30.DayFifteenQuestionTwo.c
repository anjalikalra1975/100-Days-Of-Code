//Q30: Write a program to reverse a given number.
#include <stdio.h>
int main() {
    int num,i, reverse = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (i=num; i != 0; i = i / 10) {
        int digit = i%10;
        reverse = reverse * 10+digit;
    }

    printf("Reversed number: %d\n",reverse);
    return 0;
}
