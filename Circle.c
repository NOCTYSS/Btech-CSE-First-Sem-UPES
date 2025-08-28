#include <stdio.h>
#include <math.h>
#define PI 3.14159

double radius = 9.0;
double area;
double circumference;

double main() {
    area = PI * (pow(radius,2));
    printf("Area of circle is : %.2f\n", area);
    circumference = 2 * PI * radius;
    printf("Circumference of circle is : %.2f\n", circumference);
    return 0.0;
}