#include <stdio.h>
#define CONVERSION 1.8
#define OFFSET 32
double celsius = 37.0;
double fahrenheit;

double main() {
    fahrenheit = (celsius * CONVERSION) + OFFSET;
    printf("Temperature in Fahrenheit is : %.2f\n", fahrenheit);
    return 0.0;
}