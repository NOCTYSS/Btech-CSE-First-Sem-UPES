#include <stdio.h>
#include <math.h>
int bill, units;
float total_bill;
int main()
{
    printf("Enter the number of units consumed: ");
    if(scanf("%d",&units) != 1 || units < 0) {
        printf("Invalid input. Please enter a non-negative integer for units consumed.\n");
        return 1;
    }
    if(units <= 50)
    {
        bill = units * 0.50;
        total_bill = bill;
        printf("Total Electricity Bill: Rs. %.2f\n", total_bill);
    }
    else if(units > 50 && units <= 150)
    {
        bill = (50 * 0.50) + ((units - 50) * 0.75);
        total_bill = bill;
        printf("Total Electricity Bill: Rs. %.2f\n", total_bill);
    }
    else if(units > 150 && units <= 250)
    {
        bill = (50 * 0.50) + (100 * 0.75) + ((units - 150) * 1.20);
        total_bill = bill;
        printf("Total Electricity Bill: Rs. %.2f\n", total_bill);
    }
    else{
        bill = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((units - 250) * 1.50);
        total_bill = bill + (0.20 * bill);
        printf("Total Electricity Bill: Rs. %.2f\n", total_bill);
    }

}