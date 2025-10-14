#include <stdio.h>

int main() 
 {
    int n, target;
    printf("Enter size of sorted array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &nums[i]);
    }

    printf("Enter target value: ");
    scanf("%d", &target);

    int first = -1, last = -1;
    for (int i = 0; i < n; i++) 
    {
        if (nums[i] == target) 
        {
            if (first == -1) first = i;
            last = i;
        }
    }

    if (first == -1) 
    {
        printf("-1, -1\n");
    } else {
        printf("First occurrence: %d at index %d\n", nums[first], first);
        printf("Last occurrence: %d at index %d\n", nums[last], last);
    }
    return 0;
}