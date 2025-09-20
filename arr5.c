#include <stdio.h>
int main()
{
    int n =0;
    printf("Enter the number of elements in the array :\n");
    scanf("%d",&n);
    
    int a[n];

    printf("\nEnter the elements in the array :\n"); //inserting the elements.
    for(int i =0 ; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    printf("Array : "); //printing the array
    for(int i =0; i<n; i++)
    {
        printf("%d\t", a[i]);
    }
    int count =0;
    for(int i =0; i<n; i++)
    {
        if( a[i] > 0)
        {
            count++;
        }
    }
    printf("\nThe number of positive numbers in the array is : %d",count);
    count =0;
    for(int i =0; i<n; i++)
    {
        if( a[i] < 0)
        {
            count++;
        }
    }
    printf("\nThe number of negative numbers in the array is : %d",count);
    count =0;
    for(int i =0; i<n; i++)
    {
        if( a[i] =- 0)
        {
            count++;
        }
    }
    printf("\nThe number of elements which are zero in the array : %d",count);
    return 0;
}