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
    int count_even =0;
    int count_odd = 0;
    for(int i =0; i<n; i++)
    {
        if( a[i] % 2 == 0)
        {
            count_even++;
        }
        else
        {
            count_odd++;
        }
    }
    printf("\n The number of even elements in the array is : %d\n",count_even);
    printf("\n The number of odd elements in the array is : %d\n",count_odd);
}