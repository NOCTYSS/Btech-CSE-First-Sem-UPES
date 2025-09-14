#include <stdio.h>
int main()
{
    int n,temp,sum;
    printf("Enter the number :");
    scanf("%d", &n);
    temp = n;
    sum = 0;
    if(n < 0)
    {
        printf("Enter a positive number");
    }
    for(int i =1;i<temp;i++)
    {
        if(temp % i == 0)
        {
            sum+= i;
        }
        else{
            continue;
        }
    }
    if( sum == n)
    {
        printf("%d is a perfect number", n);
    }
    else{
        printf("%d is not a perfect number", n);
    }
    return 0;
}