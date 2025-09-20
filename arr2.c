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
    int sum =0;
    
    //calculating the sum of the array.
    for(int i =0; i<n; i++)
    {
        sum += a[i];
    }
    printf("\nThe sum of the elements of the array : %d",sum);
    return 0;
}