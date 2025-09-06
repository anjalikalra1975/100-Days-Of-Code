//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.
#include<stdio.h>
int main() {
    int p,t;
    float r;
    printf("Enter the Principle amount:");
    scanf("%d",&p);
    printf("Enter the Rate of Interest:");
    scanf("%f",&r);
    printf("Enter the Time(in years):");
    scanf("%d",&t);
    float si,ci;
    si= (p*t*r)/100;
    printf("The simple interest is: %f",si);
    ci = p* pow((1+r/100),t)-p; //pow here denotes power
    printf("The compound interest is: %f",ci);
    return 0;
}
