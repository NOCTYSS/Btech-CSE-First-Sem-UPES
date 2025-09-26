#include <stdio.h>

int binarySearch(int a[], int n, int num) 
{
    int start = 0, end = n - 1;

    while (start <= end) 
    {
        int mid = (start + end) / 2;

        if (a[mid] == num) 
        {
            return mid; // element found
        }
        else if (a[mid] < num) 
        {
            start = mid + 1; // increasing the start index
        }
        else 
        {
            end = mid - 1; // decreasing the end index
        }
    }

    return 1; // element not found
}

int main() 
{
    int size=0;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    int a[size];
    printf("Enter %d elements in sorted order:\n", size);
    for (int i = 0; i < size; i++) 
    {
        scanf("%d", &a[i]);
    }
    int num = 0;
    printf("Enter element to be searched: ");
    scanf("%d", &num);

    int result = binarySearch(a, size, num);

    if (result != 1)
        printf("Element %d found at index %d\n", num, result);
    else
        printf("Element %d not found\n", num);

    return 0;
}
