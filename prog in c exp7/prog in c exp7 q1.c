#include <stdio.h>
int main() {
    float population = 100000;  
    float rate = 0.10;         
    int year;
    printf("Year\tPopulation\n");
    for (year = 1; year <= 10; year++) {
        population = population + (rate * population);  
        printf("%d\t%.0f\n", year, population);          
    }
    return 0;
}