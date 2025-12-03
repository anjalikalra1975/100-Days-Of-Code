/*4.The population of a town is 100000. The population has increased steadily at the 
rate of 10% per year for the last 10 years. 
Write a program to determine the population at the end of each year in the last decade.*/

#include <stdio.h>

int main() {
    float population = 100000;
    int year;

    printf("Year\tPopulation\n");
    for(year = 1; year <= 10; year++) {
        population = population + (population * 0.10);
        printf("%d\t%.0f\n", year, population);
    }

    return 0;
}
