#include <stdio.h>
int main()
{
    int m, n;
    printf("Enter number of rows: ");
    scanf("%d", &m);
    printf("Enter number of columns: ");
    scanf("%d", &n);

    int matrix[m][n];
    int arr[m];
    int sum =0;
    printf("Enter elements of the matrix :\n");
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
    
    //Calculating sum of each row and storing it in array.

    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            sum += matrix[i][j];
        }
        arr[i] = sum;
        sum = 0; 
    }
    printf("Sum of each row is :\n");
    for (int i = 0; i < m; i++) 
    {
        printf("Row %d : %d\n", i + 1, arr[i]);
    }

    return 0;
}