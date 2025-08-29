#include <stdio.h>
#include <math.h>
int principal = 10000;
float rate = 3.5;
int time = 5;
float simple_interest;
float compound_interest;
int main() {
    simple_interest = (principal * rate * time) / 100;
    compound_interest = principal * (pow((1 + rate / 100), time)) - principal;
    printf("Simple Interest: %.2f\n", simple_interest);
    printf("Compound Interest: %.2f\n", compound_interest);
    return 0;
}