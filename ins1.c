#include <stdio.h>

int main() 
{
    int n, pos, element;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n+1];

    printf("Enter %d elements :\n", n);
    for (int i = 0; i < n; i++)
     {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to insert (0 to %d): ", n);
    scanf("%d", &pos);

    if (pos < 0 || pos > n) 
    {
        printf("Invalid position.\n");
        return 1;
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

   
    for (int i = n; i > pos; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[pos] = element;

    printf("Array after insertion:\n");
    for (int i = 0; i <= n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}