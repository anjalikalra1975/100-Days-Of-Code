//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include<stdio.h>
int main() {
    int s1,s2,s3;
    printf("Enter the first side of the triangle:");
    scanf("%d",&s1);
    printf("Enter the second side of the triangle:");
    scanf("%d",&s2);
    printf("Enter the third side of the triangle:");
    scanf("%d",&s3);

    if (s1==s2 && s1==s3 && s2==s3) {
        printf("The given triangle is equilateral.");
    }
    else if(s1==s2 || s1==s3 || s2==s3) {
        printf("The given triangle is isoceles.");
    }
    else {
        printf("The given triangle is scalene.");
    }
    return 0;
}
