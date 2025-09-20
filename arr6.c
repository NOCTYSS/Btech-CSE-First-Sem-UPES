#include <stdio.h>
int main()
{
    int n =0;
    int num =0;
    printf("Enter the number of elements in the array :\n");
    scanf("%d",&n);
    
    printf("Enter the number you want to search in the array :\n");
    scanf("%d",&num);
    
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
    int found =0;
    int index =0;
    for(int i =0; i<n; i++)
    {
        if( a[i] == num)
        {
            found++;
            index = i;
            break;
        }
        else{
            found =0;
        }
    }
    if(found == 1)
    {
        printf("\nThe number is present in the array at the index %d.",index);
    }
    else{
        printf("\nThe number is not present in the array.");
    }
    return 0;
}
