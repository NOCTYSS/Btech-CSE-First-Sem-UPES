//Write a program to calculate library fine based on late days
#include <stdio.h>
int late_day,fine;
int main()
{
    printf("Enter the number of days late: ");
    if(scanf("%d", &late_day) != 1 || late_day < 0) {
        printf("Invalid input. Please enter a non-negative integer for days late.\n");
        return 1;
    }
    if(late_day <= 5) 
    {
        fine = late_day * 2;
    } 
    else if( late_day > 5&& late_day <= 10)
    {
        fine = late_day * 4;
    } 
    else if(late_day > 10 && late_day <= 30) 
    {
        fine = late_day * 6;
    } 
    else 
    {
        printf("Your membership is cancelled.\n");
        return 0;
    }
    printf("The total fine is: $%d\n", fine);
    return 0;
}