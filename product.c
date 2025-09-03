#include <stdio.h>
int n,prod;
int main()
{
    printf("Enter a positive integer: ");
    if(scanf("%d", &n) != 1 || n < 0) 
    {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return 1;
    }
    prod = 1;
    for(int i = 1; i <= n; i++) 
    {
        if(i%2 ==0)
        {
            prod*=i;
        }
        else{
            continue;
        }
    }
    printf("The product of %d even natural numbers is: %d\n", n, prod);
    return 0;
}