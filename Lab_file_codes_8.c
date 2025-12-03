/*4.Declare a static local variable inside a function. 
Observe how its value persists across function calls. */

#include <stdio.h>
void myFunction() {
    static int count = 0;
    count++;
    printf("myFunction() has been called %d time\n",count);
}
int main() {
    myFunction();
    myFunction();
    myFunction();
    return 0;
}
