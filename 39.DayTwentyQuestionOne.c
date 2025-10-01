//Q39: Write a program to find the product of odd digits of a number.

#include <stdio.h>
int main() {
    int num, prod = 1, digit;
    printf("Enter a number: ");
    scanf("%d", &num);

    while(num > 0) {
        digit = num % 10;       
        if(digit % 2 != 0)      
            prod = prod*digit;      
        num /= 10;              
    }
    printf("Product of odd digits = %d\n", prod);
    return 0;
}
