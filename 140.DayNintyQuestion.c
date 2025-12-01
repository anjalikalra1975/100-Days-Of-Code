/*Q140: Define a struct with enum Gender and print person's gender.

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/
#include <stdio.h>

enum Gender { MALE, FEMALE };

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person p = {"Alex", MALE};

    printf("Name: %s\n", p.name);

    if (p.gender == MALE)
        printf("Gender: Male\n");
    else
        printf("Gender: Female\n");

    return 0;
}
