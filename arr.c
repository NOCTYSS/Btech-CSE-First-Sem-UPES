#include <stdio.h>
int main()
{
    int n; //size of the array
    printf("Enter the number of elements you want in the array :\n");
    scanf("%d",&n);
    if(n<=0)  //checking for invalid input
    {
        printf("Enter a valid input for the array");
        return 1;
    }
    int arr[n]; //declaring the array
    printf("Enter the elements in the array :\n");
    for(int i=0;i<n;i++)  //initialisation of the elements in the array
    {
        scanf("%d",&arr[i]); //inputing the elements
    }
    
    // printing the array.
    
    printf("Array  :\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]); 
    }
}