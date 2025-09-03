#include <stdio.h>
int n;
int sum = 0;
int main()
{
    printf("Enter a positive integer: ");
    if(scanf("%d", &n) != 1 || n <= 0) 
    {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }
    for(int i = 1; i <= n; i++) 
    {
        if(i % 2 != 0)
        {
            sum += i;
        }
        else{
            continue;
        }
    }
    printf("The sum of the first %d odd natural numbers is: %d\n", n, sum);
    return 0;
}