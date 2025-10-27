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
    int a[] = {2, 4, 6, 8, 10, 12, 14};
    int n = sizeof(a) / sizeof(a[0]);
    int num = 10;
    int result = binarySearch(a, n, num);

    if (result != 1)
        printf("Element %d found at index %d\n", num, result);
    else
        printf("Element %d not found\n", num);

    return 0;
}
