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
    
    //printing the array

    printf("Array before reversing : "); 
    for(int i =0; i<n; i++)
    {
        printf("%d\t", a[i]);
    }
    
    //Reversing the array and printing it.
   
    printf("\nArray after reversing : ");
    for(int i = n-1; i>=0;i--)
    {
        printf("%d\t", a[i]);
    }
}