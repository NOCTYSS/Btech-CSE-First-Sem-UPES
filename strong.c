#include <stdio.h>
void main()
{
    int n,temp,sum,fact;
    printf("Enter the number :");
    scanf("%d", &n);
    temp = n;
    sum = 0;
    if(n < 0)
    {
        printf("Enter a positive number");
    }
    while(temp != 0)
    {
        int digit = temp % 10;
        fact = 1;
        for(int i =1;i<=digit;i++)
        {
            fact *= i;
        }
        sum += fact;
        temp = temp / 10;
    }
    if(sum == n)
    {
        printf("%d is a strong number", n);
    }
    else{
        printf("%d is not a strong number", n);
    }
}