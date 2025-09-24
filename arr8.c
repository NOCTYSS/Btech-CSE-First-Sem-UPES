#include <stdio.h>

int main() 
{
    int s1, s2; //two different sizes for two different arrays.
    printf("Enter size of first array: ");
    scanf("%d", &s1);

    int arr1[s1];
    printf("\nEnter elements of first array:\n");
    for (int i = 0; i < s1; i++) 
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &s2);

    int arr2[s2];
    printf("\nEnter elements of second array:\n");
    for (int i = 0; i < s2; i++) 
    {
        scanf("%d", &arr2[i]);
    }

    int merged[s1 + s2]; //Declaring the merged array where both the arrays will be merged.
    
    
    //loops for merging the two arrays.

    for (int i = 0; i < s1; i++) 
    {
        merged[i] = arr1[i];
    }
    for (int i = 0; i < s2; i++) 
    {
        merged[s1 + i] = arr2[i];
    }

    
    //printing the merged array.

    printf("Merged array is :\n");
   
    for (int i = 0; i < s1 + s2; i++)
    {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}