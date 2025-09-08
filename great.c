//Write a program to find the HCF (GCD) of two numbers.
#include<stdio.h>
int n1,n2;
int main()
{
    printf("Enter the first positive integer: ");
    scanf("%d", &n1);
    if(n1 < 0)
    {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return 1;
    }
    printf("Enter the second positive integer: ");
    scanf("%d", &n2);   
    if(n2 < 0)
    {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return 1;
    }
    while(n1 != n2)
    {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    printf("The HCF (GCD) is: %d\n", n1);
    return 0;
}