#include <stdio.h>
int bill,unit;
int main()
{
    printf("Enter the number of units consumed: ");
    if(scanf("%d", &unit) != 1 || unit < 0) {
        printf("Invalid input. Please enter a non-negative integer for units consumed.\n");
        return 1;
    }
    if(unit <= 100) 
    {
        bill = unit * 5;
    } 
    else if( unit > 100 && unit <= 200)
    {
        bill = (100 * 5) + (unit - 100) * 7;
    } 
    else if(unit > 200 && unit <= 300) 
    {
        bill = (100 * 5) + (100 * 7) + (unit - 200) * 10;
    } 
    else 
    {
        bill = (100 * 5) + (100 * 7) + (100 * 10) + (unit - 300) * 12;
    }
    printf("The total electricity bill is: $%d\n", bill);
    return 0;
}