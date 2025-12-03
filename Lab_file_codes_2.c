/*5.WAP using ternary operator, the user should input the length and breadth of a rectangle, 
one has to find out which rectangle has the highest perimeter.
 The minimum number of rectangles should be three.*/

 #include <stdio.h>
int main() {
    int x1, y1, x2, y2, x3, y3;
    printf("Enter the length and breath of first triangle:");
    scanf("%d %d", &x1,&y1);
    printf("Enter the length and breath of second triangle:");
    scanf("%d %d", &x2,&y2);
    printf("Enter the length and breath of third triangle:");
    scanf("%d %d", &x3,&y3);

    int p1,p2,p3,max;
    p1= 2*(x1+y1);
    p2= 2*(x2+y2);
    p3= 2*(x3+y3);
    max=(p1>p2)?((p1>p3)? p1:p3):((p2>p3)? p2:p3);
    printf("The triangle with greatest perimeter:%d\n", max);
    return 0;
}
