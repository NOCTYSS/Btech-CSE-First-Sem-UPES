#include <stdio.h>
int main()
{
    int m, n;
    printf("Enter number of rows: ");
    scanf("%d", &m);
    printf("Enter number of columns: ");
    scanf("%d", &n);

    int matrix[m][n];;
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    int sum =0;
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            sum += matrix[i][j];
        }
    }
    printf("Sum of all elements in the matrix is : %d\n", sum);

    return 0;
}