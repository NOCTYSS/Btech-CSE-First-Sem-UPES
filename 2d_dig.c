#include <stdio.h>

int main() 
{
    int n, distinct = 1;
    
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);
    if(n<2)
    {
        printf("Matrix size should be at least 2x2.\n");
        return 1;
    }

    int matrix[n][n], diag[n];

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Store diagonal elements
    for (int i = 0; i < n; i++) 
    {
        diag[i] = matrix[i][i];
    }

    // Check for distinctness
    for (int i = 0; i < n; i++) 
    { 
        for (int j = i + 1; j < n; j++) 
        {
            if (diag[i] != diag[j]) 
            {
                distinct = 0;
                break;
            }
            else 
            {
                distinct = 1;
            }
        }
        if (distinct == 0) 
        {
            break;
        }
    }

     printf("The matrix is:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) 
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    if (distinct == 1) 
    {
        printf("All diagonal elements are distinct.\n");
    } 
    else 
    {
        printf("Diagonal elements are not all distinct.\n");
    }
    return 0;
}