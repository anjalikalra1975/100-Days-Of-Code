//Q34: Write a program to check if a number is prime.
#include <stdio.h>
int main(){
    int i,n,temp=0;
    printf("Enter an integer: ");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            temp=1;
            break;
        }
    }
    if(temp==0){
        printf("Prime");
    }
    else{
        printf("Not prime");
    }
    return 0;
    