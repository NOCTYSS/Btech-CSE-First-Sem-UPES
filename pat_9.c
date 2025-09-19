#include <stdio.h>

int main() {
    int i, j, n = 4;  // n = number of rows in upper half

    
    for (i = 1; i <= n; i++) 
    {
        // Print spaces
        for (j = 1; j <= n - i; j++) 
        {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= 2*i - 1; j++) 
        {
            printf("*");
        }
        printf("\n");
    }

    for (i = n - 1; i >= 1; i--) 
    {
        // Print spaces
        for (j = 1; j <= n - i; j++) 
        {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= 2*i - 1; j++) 
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
