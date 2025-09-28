#include <stdio.h>
int main()
{
    int row1, col1, row2, col2;
    printf("Enter number of rows and columns for first matrix: ");
    scanf("%d %d", &row1, &col1);
    printf("Enter number of rows and columns for second matrix: ");
    scanf("%d %d", &row2, &col2);
    if(row1 != row2 || col1 != col2) 
    {
        printf("Matrices must have the same dimensions for addition.\n");
        return 1;
    }
    int matrix1[row1][col1], matrix2[row2][col2], sum[row1][col1];
    printf("Enter elements of first matrix :\n");
    for (int i = 0; i < row1; i++) 
    {
        for (int j = 0; j < col1; j++) 
        {
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter elements of second matrix :\n");
    for (int i = 0; i < row2; i++) 
    {
        for (int j = 0; j < col2; j++) 
        {
            scanf("%d", &matrix2[i][j]);
        }
    }
    //Printing the two matrices.
    printf("First matrix is :\n");
    for (int i = 0; i < row1; i++) 
    {
        for (int j = 0; j < col1; j++) 
        {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n"); 
    }

    printf("Second matrix is :\n");
    for (int i = 0; i < row1; i++) 
    {
        for (int j = 0; j < col1; j++) 
        {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n"); 
    }
    
    //Calculating sum of two matrices and storing it in sum matrix.

    for (int i = 0; i < row1; i++) 
    {
        for (int j = 0; j < col1; j++) 
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    printf("Sum of the two matrices is :\n");
    for (int i = 0; i < row1; i++) 
    {
        for (int j = 0; j < col1; j++) 
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n"); 
    }
    return 0;
}