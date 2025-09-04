#include <stdio.h>
int n,rev;
int main()
{
    printf("Enter the positive integer: ");
    if(scanf("%d", &n) != 1 || n < 0) 
    {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return 1;
    }
    rev = 0;
    while(n != 0)
    {
        int dig = n%10;
        rev = rev*10 + dig;
        n = n/10;
    }
    printf("The reverse of the number is: %d\n", rev);
    return 0;
}