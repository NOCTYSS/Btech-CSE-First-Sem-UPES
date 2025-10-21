#include <stdio.h>

int ceil(int arr[], int n, int x) 
{
    int start = 0, end = n - 1, ans = -1;
    while (start <= end) 
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] >= x) 
        {
            ans = mid;
            end = mid - 1;
        } 
        else 
        {
            start = mid + 1;
        }
    }
    return ans;
}

int main(void) 
{
    int n;
    printf("Enter size of sorted array: ");
    scanf("%d", &n);
    if(n <= 0)
    {
        printf("-1\n");
        return 0;
    }

    int arr[n];
    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    int x;
    printf("Enter x: ");
    scanf("%d", &x);
    if(x > arr[n-1] || x < arr[0])
    {
        printf("-1\n");
        return 0;
    }

    printf("%d\n", ceil(arr, n, x));
    return 0;
}