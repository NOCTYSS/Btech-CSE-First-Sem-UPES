#include <stdio.h>
int main()
{
    int n;
    double sum = 0.0;
    int dem =3;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    if(n <= 0) {
        printf("Please enter a positive integer.");
        return 1;
    }
    for(int i =0;i<n;i++)
    {
        int num = 2 * i + 2;
        sum += (double) num / dem;
        dem += 4;
    }
    printf("The sum of the series is: %.2f\n", sum);
    return 0;
}