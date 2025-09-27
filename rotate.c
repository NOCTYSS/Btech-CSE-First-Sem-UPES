#include <stdio.h>

void rotate(int a[], int n, int k) 
{
    k = k % n; 
    int temp[n];

    for (int i = 0; i < n; i++) 
    {
        temp[(i + k) % n] = a[i];
    }

    for (int i = 0; i < n; i++) 
    {
        a[i] = temp[i];
    }
}

int main() 
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5, k = 2;

    rotate(arr, n, k);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
