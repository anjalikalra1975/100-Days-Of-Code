/*5.Ramanujan Number is the smallest number that can be expressed as the sum of two
 cubes in two different ways. WAP to print all such numbers up to a reasonable limit.
 Example of Ramanujan number: 1729
 12^3 + 1^3 and 10^3 + 9^3. for a number L=20(that is limit)
*/
#include <stdio.h>

int main() {
    int limit = 2000; 

    printf("Ramanujan Numbers up to %d are:\n", limit);

    for (int num = 1; num <= limit; num++) {
        for (int a = 1; a * a * a < num; a++) {
            for (int b = a + 1; b * b * b < num; b++) {
                for (int c = 1; c * c * c < num; c++) {
                    for (int d = c + 1; d * d * d < num; d++) {
                        if ((a*a*a + b*b*b == num) &&
                            (c*c*c + d*d*d == num) &&
                            !((a == c) && (b == d))) {

                            printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n",
                                   num, a, b, c, d);
                        }
                    }
                }
            }
        }
    }

    return 0;
}
