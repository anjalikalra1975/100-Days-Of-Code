//Q143: Find and print the student with the highest marks.

/*
Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s[5];
    int i, maxIndex = 0;

    for (i = 0; i < 5; i++) {
        scanf("%s %d %f", s[i].name, &s[i].roll_no, &s[i].marks);
        if (s[i].marks > s[maxIndex].marks)
            maxIndex = i;
    }

    printf("Topper: %s %d %.2f\n",
           s[maxIndex].name, s[maxIndex].roll_no, s[maxIndex].marks);

    return 0;
}
