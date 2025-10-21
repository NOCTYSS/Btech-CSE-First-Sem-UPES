#include <stdio.h>

int pivot_index(int arr[], int n) {
    long long total = 0;
    for (int i = 0; i < n; i++) total += arr[i];

    long long left = 0;
    for (int i = 0; i < n; i++) {
        if (left == total - left - arr[i]) return i;
        left += arr[i];
    }
    return -1;
}

int main(void) {
    int n;
    printf("Enter size of array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("-1\n");
        return 0;
    }

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("%d\n", pivot_index(arr, n));
    return 0;
}
```// filepath: c:\Code\C\Btech-CSE-First-Sem-UPES\Day53.c
#include <stdio.h>

int pivot_index(int arr[], int n) {
    long long total = 0;
    for (int i = 0; i < n; i++) total += arr[i];

    long long left = 0;
    for (int i = 0; i < n; i++) {
        if (left == total - left - arr[i]) return i;
        left += arr[i];
    }
    return -1;
}

int main(void) {
    int n;
    printf("Enter size of array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("-1\n");
        return 0;
    }

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("%d\n", pivot_index(arr, n));
    return 0;
}