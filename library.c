#include <stdio.h>

int main() {
    int late_days;
    float fine_per_day = 2.0; // Fine rate per day (change as needed)
    float total_fine;

    printf("Enter the number of late days: ");
    if (scanf("%d", &late_days) != 1 || late_days < 0) {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return 1;
    }

    if (late_days == 0) {
        printf("No fine. Book returned on time.\n");
    } 
    else if (late_days < 31 || late_days < 30 || late_days < 29 || late_days < 28) 
    {
        total_fine = late_days * fine_per_day;
        printf("Total library fine is Rs. %.2f\n", total_fine);
    }
    else 
    {
        printf("Membership cancelled due to excessive delay.\n");
    }

    return 0;
}