//Q150: Use pointer to struct to modify and display data using -> operator.

/*
Sample Test Cases:
Input 1:
Student pointer modifying values: John 106 91
Output 1:
Modified Data: Name: John | Roll: 106 | Marks: 91

*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s, *p;
    p = &s;

    scanf("%s %d %f", p->name, &p->roll_no, &p->marks);

    p->marks += 5;   // modify using pointer

    printf("Name: %s\nRoll: %d\nMarks: %.2f\n",
           p->name, p->roll_no, p->marks);

    return 0;
}
