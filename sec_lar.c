#include <stdio.h>

int main() 
{
    int n;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    if (n < 2) 
    {
        printf("Array must have at least two elements.\n");
        return 1;
    }

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int largest = 0, second_largest = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest) 
        {
            second_largest = largest;
            largest = arr[i];
        } 
        else if (arr[i] > second_largest && arr[i] < largest) 
        {
            second_largest = arr[i];
        }
    }

    if (second_largest == 0) 
    {
        printf("No second largest element found (all elements are equal).\n");
    } 
    else 
    {
        printf("Second largest element is: %d\n", second_largest);
    }

    return 0;
}