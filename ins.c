#include <stdio.h>

int main() 
{
    int n, element, pos;
    printf("Enter the size of the sorted array: ");
    scanf("%d", &n);

    int a[n+1];
    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    // Finding position to insert the element .
    pos = n;
    for (int i = 0; i < n; i++) 
    {
        if (element < a[i]) 
         {
            pos = i;
            break;
        }
    }

    for (int i = n; i > pos; i--) 
    {
        a[i] = a[i-1];
    }
     a[pos] = element;

    printf("Array after insertion:\n");
    for (int i = 0; i <= n; i++) 
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}