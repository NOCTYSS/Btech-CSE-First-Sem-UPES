#include <stdio.h>
#include <math.h>
#include <stdint.h>

int main(void) 
{
    unsigned long long n;
    printf("Enter n: ");
    scanf("%llu", &n);
    if(n == 0)
    {
        printf("-1\n");
        return 0;
    }

    int sum = (int)(n * (n + 1) / 2);
    long double sld = sqrt((long double)sum);
    unsigned long long x = (unsigned long long)(sld + 0.5L);

    if ((int)x * x == sum)
        printf("%llu\n", x);
    else
        printf("-1\n");

    return 0;
}