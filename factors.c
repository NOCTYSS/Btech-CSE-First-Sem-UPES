//Write a program to print all factors of a given number.
#include<stdio.h>
int num;
int main()
{
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if(num < 0)
    {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return 1;
    }
    printf("The factors of %d are: ", num);
    for(int i =1; i <= num; i++)
    {
        if(num % i == 0)
        {
            printf("%d,", i);
        }
    }
    return 0;
}