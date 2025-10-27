#include <stdio.h>
#include <math.h>

int main() 
{
    int n, i, j, isPrime;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++) 
    {
        isPrime = 1; // assume i is prime
        for (j = 2; j <= sqrt(i); j++)
         {
            if (i % j == 0) 
            {
                isPrime = 0; // not prime
                break;
            }
        }
        if (isPrime) 
        {
            printf("%d ", i);
        }
    }

    return 0;
}
