#include <stdio.h>

int main() {
    int s1, s2, s3;
    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%d %d %d", &s1, &s2, &s3);
    if(s1 != 3 ||s2 != 3 ||s3 != 3 || s1 <= 0 || s2 <= 0 || s3 <= 0)
    {
        printf("Invalid input. Please enter positive integers.\n");
        return 1;
    }
    // Triangle inequality check
    if (s1 + s2 <= s3 || s2 + s3 <= s1 || s1 + s3 <= s2) {
        printf("The given sides do not form a valid triangle.\n");
        return 1;
    }
    if (s1 == s2 && s2 == s3) {
        printf("The triangle is Equilateral.\n");
    } else if (s1 == s2 || s2 == s3 || s1 == s3) {
        printf("The triangle is Isosceles.\n");
    } else {
        printf("The triangle is Scalene.\n");
    }
    return 0;
}