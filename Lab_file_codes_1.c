/* 2 WAP to compute the BMI Index of the person and print the BMI values as per the 
following ranges. You can use the following formula to compute 
BMI= weight(kgs)/Height(Mts)*Height(Mts).
Starvation	<15
Anorexic	15.1 to 17.5
Underweight	17.6 to 18.5
Ideal	18.6 to 24.9
Overweight	25 to 25.9
Obese	30 to 39.9
Morbidity Obese	40.0 above */

#include <stdio.h>
int main () {
    float w,h;
    printf("Enter your height (in meters):");
    scanf("%f",&h);
    printf("Enter your weight(in kgs):");
    scanf("%f",&w);
    float BMI;
    BMI= w/(h*h);
    printf("Your BMI is %.2f\n", BMI);
    if (BMI<15) {
        printf("Starvation");
    } else if (BMI>=15.1 && BMI<17.5) {
        printf("Anorexic");
    } else if (BMI>=17.6 && BMI<18.5) {
        printf("Underweight");
    } else if (BMI>=18.6 && BMI<24.9) {
        printf("Ideal");
    } else if (BMI>=25 && BMI<29.5) {
        printf("Overweight");
    } else if (BMI>=30 && BMI<30.9) {
        printf("Obese");
    } else {
        printf("Your BMI: %d",BMI);
    }
    return 0;
}

