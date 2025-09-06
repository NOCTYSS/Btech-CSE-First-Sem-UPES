#include <stdio.h>
int num, i, flag = 0;
int main()
{
    printf("Enter a positive integer: ");
    if(scanf("%d", &num) != 1 || num <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }
    for(i = 1; i <= num; i++)
    {
        if(num % i == 0)
        {
            flag ++;
        }
    }
    if (flag == 2)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);
    return 0;
}