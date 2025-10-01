//Q41: Write a program to swap the first and last digit of a number.
#include <stdio.h>
int main() {
    int num, first, last, digits = 0, temp, mult = 1, middle;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    last = temp % 10; 

    while (temp >= 10) {
        temp = temp / 10;
        mult = mult* 10; 
    }
    first = temp; 
    middle = num % mult;     
    middle = middle / 10;    
    int result = last * mult + middle * 10 + first;
    printf("The required output is:%d\n", result);
    return 0;
}