//Write a program to find the product of odd digits of a number.
#include<stdio.h>
int n;
int main()
{
    int prod =1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if(n<0)
    {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return 1;
    }
    while(n != 0)
    {
        int digit = n%10;
        if((digit%2) !=  0)
        {
            prod *= digit;
        }
        n /= 10;
    }
    printf("Product of odd digits: %d\n", prod);
    return 0;
}