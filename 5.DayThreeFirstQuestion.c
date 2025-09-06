//Q5: Write a program to convert temperature from Celsius to Fahrenheit.
#include<stdio.h>
int main() {
float C,F;
printf("Enter temperature in Celcius:");
scanf("%f",&C);
F=(C*9/5)+32;
printf("The temperature in Fahrenhite is %f",F);
return 0;
}
