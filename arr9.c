#include <stdio.h>

int main() 
{
    long long num;
    int count[10] = {0};
    printf("Enter an integer number of your choice : ");
    scanf("%lld", &num);
    if (num == 0) 
    {
        printf("Invalid input.\n");
        return 1;
    }
    if (num < 0) 
    {
        num = -num; // To make any negative number positive.
    }

    if (num == 0) 
    {
        printf("Most frequent digit: 0 (which occurs 1 time)\n");
        return 0;
    }

    while (num != 0)
    {
        int digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    int high_digit = 0;
    int high_count = count[0];
    for (int i = 1; i < 10; i++) 
    {
        if (count[i] > high_count) 
        {
            high_count = count[i];
            high_digit = i;
        }
    }

    printf("Most frequent digit: %d (occurs %d times)\n", high_digit, high_count);
    return 0;
}