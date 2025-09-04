//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
#include<stdio.h>
int main() {
    int num1,num2;
    printf("Enter your first number(number cannot be 0):");
    scanf("%d", &num1);
    printf("Enter your second number(number cannot be 0):");
    scanf("%d", &num2);
    int sum, diff,prod,quot;
    sum=num1+num2;
    printf("The sum is: %d",sum);
    diff=num1-num2;
    printf("The difference is: %d",diff);
    prod=num1*num2;
    printf("The product is:%d",prod);
    quot=num1/num2;
    printf("The quotient is: %d",quot);
    return 0;

}