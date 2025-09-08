#include<stdio.h>
int a,b;
int main()
{
    printf("Enter the first positive number: ");
    scanf("%d", &a);
    if(a < 0)
    {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return 1;
    }
    printf("Enter the second positive number: ");
    scanf("%d", &b);
    if(b < 0)
    {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return 1;
    }
    int n1 = a;
    int n2 = b;
    while(n1!= n2)
    {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    int hcf = n1;
    int lcm = (a * b) / hcf;
    printf("The LCM of %d and %d is: %d\n", a, b, lcm);
    return 0;
}  