#include <stdio.h>
int main()
{
    int m , n;
    printf("Enter number of rows: ");
    scanf("%d", &m);
    printf("Enter number of columns: ");
    scanf("%d", &n);
    int matrix[m][n];
    int flag = 1; // Assuming that  the matrix is symmetric initially
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
    
    if(m != n) 
    {
        flag = 0; // A matrix is symmetric only if it is square
        printf("The matrix is not symmetric.\n");
    } 
    else 
    {
        for (int i = 0; i < m; i++) 
        {
            for (int j = 0; j < n; j++) 
            {
                if (matrix[i][j] != matrix[j][i]) 
                {
                    flag = 0; // Matrix is not symmetric
                    break;
                }
            }
            if (flag == 0) 
            {
                break;
            }
        }
    }
    if (flag == 1) 
    {
        printf("The matrix is symmetric.\n");
    } 
    else 
    {
        printf("The matrix is not symmetric.\n");
    }
    return 0;

}