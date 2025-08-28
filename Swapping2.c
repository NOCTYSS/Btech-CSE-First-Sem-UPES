#include <stdio.h>
int a = 5;
int b = 10;

int main() {
    printf("Before swapping: a = %d, b = %d\n", a, b);
    a = a + b; // Step 1: a now holds the sum of a and b
    b = a - b; // Step 2: b is now the original value of a
    a = a - b; // Step 3: a is now the original value of b
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}