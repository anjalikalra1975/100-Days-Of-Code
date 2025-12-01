/*Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

/*
Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/
#include <stdio.h>

enum Traffic { RED, YELLOW, GREEN };

int main() {
    enum Traffic signal;

    printf("Enter signal (0-RED, 1-YELLOW, 2-GREEN): ");
    scanf("%d", &signal);

    if (signal == RED)
        printf("Stop\n");
    else if (signal == YELLOW)
        printf("Wait\n");
    else if (signal == GREEN)
        printf("Go\n");
    else
        printf("Invalid Signal\n");

    return 0;
}
