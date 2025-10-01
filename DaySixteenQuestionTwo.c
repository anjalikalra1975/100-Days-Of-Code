//Q32: Write a program to check if a number is a palindrome.
#include <stdio.h>
int main() {
    int i, num, original, reversed=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    original = num;
    for (i=num; i != 0; i = i / 10) {
        int digit = i % 10;
        reversed = reversed * 10 + digit;
    }
    if (original == reversed) {
        printf("Palindrome");
    } else {
        printf("Not palindrome");
    }
    return 0;
}