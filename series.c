#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    if(n <= 0) {
        printf("Please enter a positive integer.");
        return 1;
    }
    for(int i = 0; i < n; i++)
    {
        int numerator = (2 * i) + 1;
        int demominator = (2 * i) + 2;
        if( i == 0)
        {
            sum+= 1.0;
        }
        else
        {
            sum+= (double)numerator / demominator;
        }
    }
    printf("The sum of the series is: %.2f\n", sum);
    return 0;
}