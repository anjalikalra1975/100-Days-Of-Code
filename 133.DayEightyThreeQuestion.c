/*Q133: Create an enum for months and print how many days each month has.

/*
Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

*/
#include <stdio.h>

enum Month { JAN=1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

int main() {
    enum Month m;

    for (m = JAN; m <= DEC; m++) {
        switch (m) {
            case APR: case JUN: case SEP: case NOV:
                printf("Month %d has 30 days\n", m); break;
            case FEB:
                printf("Month %d has 28/29 days\n", m); break;
            default:
                printf("Month %d has 31 days\n", m);
        }
    }
    return 0;
}
