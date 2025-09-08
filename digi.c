#include<stdio.h>
int num,temp;
int main()
{
    int sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if(num < 0)
    {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return 1;
    }
    temp = num;
    while(temp !=0)
    {
        int digit = temp % 10;
        sum += digit;
        temp /= 10;
    }
    printf("The sum of the digits of %d is: %d\n", num, sum);
    return 0;
}