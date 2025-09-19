//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include<stdio.h>
int main() {
    char ch;
    printf("Enter an alphabet:");
    scanf("%c",&ch);
    
    if (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || 
        ch=='i' || ch=='o' || ch=='u'){
        printf("The entered alphabet is a vowel.");
    }
    else {
        printf("The entered alphabet is a consonent.");
    }
    return 0;
}
