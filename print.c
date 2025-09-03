#include <stdio.h>
 int n;
int main()
{
    printf("Enter the number till you want to print natural numbers: ");
    if(scanf("%d", &n) != 1 || n <= 0) 
    {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }
    printf("The natural numbers are:\n");
    for(int i =1;i<=n;i++)
    {
        printf("%d\t",i);
    }
    return 0;
}