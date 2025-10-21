#include <stdio.h>

int find_majority(int arr[], int n) {
    int candidate = 0, count = 0;
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = arr[i];
            count = 1;
        } else if (arr[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }
    // verify
    count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate) count++;
    }
    return (count > n / 2) ? candidate : -1;
}

int main(void) {
    int n;
    printf("Enter size of array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("-1\n");
        return 0;
    }

    int nums[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("%d\n", find_majority(nums, n));
    return 0;
}