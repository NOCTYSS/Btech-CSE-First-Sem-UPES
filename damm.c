#include <stdio.h>

int l = 5;
int b = 10;

int main() {
    int area = (l * b);
    printf("Area of rectangle: %d\n", area);
    int perimeter = 2 * (l + b);
    printf("Perimeter of rectangle: %d\n", perimeter);
    return 0;
}