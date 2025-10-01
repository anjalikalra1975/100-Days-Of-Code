//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>
int main(){
    float num1,num2;
    char op;
    printf("enter ur num1:");
    scanf("%f",&num1);
    printf("enter ur num2:");
    scanf("%f",&num2);
    printf("Enter an operator (+, -, *): ");
    scanf(" %c",&op);
    switch(op){
        case '+':
            printf("Result=%.2f", num1+num2);
            break;
        case '-':
            printf("Result=%.2f", num1-num2);
            break;
        case '*':
            printf("Result=%.2f", num1*num2);
            break;
        default:
           printf("invalid");
    }
    return 0;
}
