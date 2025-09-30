//Q22: Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>
int main() {
    float cp, sp, percentage;
    printf("enter cost price:");
    scanf("%f", &cp);
    printf("enter selling price:");
    scanf("%f", &sp);
    
    if (sp>cp) {
        percentage = ((sp-cp)/cp) *100;
        printf("Profit earned is %.0f%\n", percentage);
    }
    else if (sp <cp) {
        percentage = ((cp-sp)/cp) *100;
        printf("Loss incurred is %.0f%\n", percentage);
    }
    else {
        printf("No Profit No Loss\n");
    }

    return 0;
}