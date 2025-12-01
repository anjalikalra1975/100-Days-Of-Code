//Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/
#include <stdio.h>

int main() {
    char str[100], ch;
    int i, count = 0;

    // Input string
    printf("Enter a string: ");
    gets(str); // Note: gets() is unsafe, but used commonly in basic labs

    // Input character to search
    printf("Enter a character to find its frequency: ");
    scanf("%c", &ch);

    // Counting frequency
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ch) {
            count++;
        }
    }

    // Output
    printf("%d", count);

    return 0;
}
