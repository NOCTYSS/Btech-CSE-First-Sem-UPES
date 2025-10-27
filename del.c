#include <stdio.h>

int main() 
{
    int n, pos;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int ar[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &ar[i]);
    }

    printf("Enter the position to delete (0 to %d): ", n - 1);
    scanf("%d", &pos);

    if (pos < 0 || pos >= n) 
    {
        printf("Invalid position.\n");
        return 1;
    }
    for (int i = pos; i < n - 1; i++) 
    {
        ar[i] = ar[i + 1];
    }

    printf("Array after deletion:\n");
    for (int i = 0; i < n - 1; i++) 
    {
        printf("%d ", ar[i]);
    }
    printf("\n");
    return 0;
}