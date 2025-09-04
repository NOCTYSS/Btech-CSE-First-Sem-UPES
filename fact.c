//Calculating the factorial of a number
#include <stdio.h>
int n, fact;
int main()
{
    printf("Enter a positive integer: ");
    if(scanf("%d", &n) != 1 || n < 0) 
    {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return 1;
    }
    fact = 1;
    for(int i = 1; i <= n; i++) 
    {
        fact *= i;
    }
    printf("The factorial of %d is: %d\n", n, fact);
    return 0;
}