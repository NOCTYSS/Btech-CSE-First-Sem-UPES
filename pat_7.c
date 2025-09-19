#include <stdio.h>

int main() 
{
    int i, j;

    // Ascending part: 1, 3, 5
    for (i = 1; i <= 5; i += 2) {
        for (j = 0; j < i; j++) {
            printf("*\n");
        }
        printf("\n"); // blank line after each group
    }

    // Descending part: 3, 1
    for (i = 3; i >= 1; i -= 2) {
        for (j = 0; j < i; j++) {
            printf("*\n");
        }
        if (i != 1)  // avoid extra blank line after last group
            printf("\n");
    }

    return 0;
}
