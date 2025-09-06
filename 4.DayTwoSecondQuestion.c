//Q4: Write a program to calculate the area and circumference of a circle given its radius.
#include<stdio.h>
int main() {
    int r;
    float PI = 3.14;
    printf("Enter the radius:");
    scanf("%d",&r);
    float area, circum;
    area=PI*(r*r);
    printf("The area of the circle is:%.2f\n",area);
    circum=2*PI*r;
    printf("The circumerence of the circle is:%.2f",circum);
    return 0;

}
