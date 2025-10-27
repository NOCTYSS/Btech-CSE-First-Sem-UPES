#include <stdio.h>

int main() 
{
    int m, n;
    printf("Enter number of rows: ");
    scanf("%d", &m);
    printf("Enter number of columns: ");
    scanf("%d", &n);

    int matrix[m][n];
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Diagonal traversal of the matrix:\n");
    // Traverse diagonals starting from first row
    for (int k = 0; k < n; k++)
    {
        int i = 0, j = k;
        while (i < m && j >= 0) 
        {
            printf("%d ", matrix[i][j]);
            i++;
            j--;
        }
    }
    for (int k = 1; k < m; k++) 
    {
        int i = k, j = n - 1;
        while (i < m && j >= 0) 
        {
            printf("%d ", matrix[i][j]);
            i++;
            j--;
        }
    }
    printf("\n");
    return 0;
}