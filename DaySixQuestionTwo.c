//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include <stdio.h>
#include <stdio.h>
int main() {
    int i;
    printf("Enter an integer: ");
    scanf("%d", &i);
    if (i >= 0) {
     if (i == 0) {
          printf("The entered number is 0.");
        } else {
        printf("The entered number is positive.");
        }
    } else {
        printf("The entered number is negative.");
    }
    return 0;
}
