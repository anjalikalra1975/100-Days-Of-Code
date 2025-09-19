//Q16: Write a program to input three numbers and find the largest among them using if–else.
#include<stdio.h>
int main() {
    int num1,num2,num3;
    printf("Enter the first number:");
    scanf("%d",&num1);
    printf("Enter the second number:");
    scanf("%d",&num2);
    printf("Enter the third number:");
    scanf("%d",&num3);

    if (num1>num2 && num1>num3) {
        printf("The first number entered is the greatest.");
    }
    else if (num2>num1 && num2>num3) {
        printf("The second number entered is the greatest.");
    }
    else {
        printf("The third number entered is the greatest.");
    }
    return 0;
}