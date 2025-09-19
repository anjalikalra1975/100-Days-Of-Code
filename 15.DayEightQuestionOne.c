//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include<stdio.h>
int main() {
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    
    if (ch>='A' && ch<='Z'){
        printf("The entered character is an Uppercase alphabet");
    }
    else if(ch>='a'&& ch<='z'){
        printf("The entered character is a Lowercase alphabet");
    }
    else if(ch>='0' && ch<='9'){
        printf("The entered character is a Number");
    }
    else{
        printf("The entered character is a Special character");
    }
    return 0;
}
