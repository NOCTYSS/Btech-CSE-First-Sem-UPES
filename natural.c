#include <stdio.h>
int n=0;
int sum =0;
int main() {
    printf("Enter the number ");
    if(scanf("%d",&n) !=1 || n<=0)
    {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1; // Exit the program with an error code
    }
    else
    {
        sum = (n*(n+1))/2;
}
    printf("The sum of first %d natural numbers is %d\n",n,sum);
    return 0;
}