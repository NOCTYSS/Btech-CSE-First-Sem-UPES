#include <stdio.h>
int main()
{
    int m , n;
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

    printf("The matrix is:\n");
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    int sum =0;
    for (int i = 0; i < m; i++)
    {
        for (int j = i; j <= i; j++) 
        {
            sum += matrix[i][j];
        }
    }
    printf("Sum of main diagonal elements in the matrix is : %d\n", sum);

    return 0;
}