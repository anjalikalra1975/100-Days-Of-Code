//Q3: Write a program to calculate the area and perimeter of a rectangle g1iven its length and breadth.
#include<stdio.h>
int main() {
    int l,b;
    printf("Enter the length:");
    scanf("%d",&l);
    printf("Enter the breath:");
    scanf("%d",&b);
    int peri, area;
    peri= 2*(l+b);
    printf("The perimeter of the rectangle: %d\n",peri);
    area=l*b;
    printf("The area of the rectangle:%d\n",area);
    return 0;

}
