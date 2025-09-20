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
    int max = a[0];
    int min = a[0];
    for(int i =0; i<n; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }
    for(int i =0; i<n; i++)
    {
        if(a[i] < min )
        {
            min = a[i];
        }
    }
    printf(" \nMax element is : %d\n",max);
    printf(" \nMin element is : %d\n",min);
}