#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

static unsigned hash_int(unsigned x) { return (x * 2654435761u); }

int main(void) {
    int n;
    if (printf("Enter size of array: "), scanf("%d", &n) != 1 || n <= 0) {
        printf("-1 -1\n");
        return 0;
    }

    int *nums = malloc(n * sizeof(int));
    if (!nums) return 0;
    for (int i = 0; i < n; i++) scanf("%d", &nums[i]);

    int target;
    if (printf("Enter target: "), scanf("%d", &target) != 1) {
        printf("-1 -1\n");
        free(nums);
        return 0;
    }

    int size = 1;
    while (size < n * 2) size <<= 1;
    int *keys = malloc(size * sizeof(int));
    int *vals = malloc(size * sizeof(int));
    if (!keys || !vals) { free(nums); return 0; }
    for (int i = 0; i < size; i++) keys[i] = INT_MIN;

    for (int i = 0; i < n; i++) {
        int need = target - nums[i];
        unsigned h = hash_int((unsigned)need) & (size - 1);
        while (keys[h] != INT_MIN) {
            if (keys[h] == need) {
                printf("%d %d\n", vals[h], i);
                free(nums); free(keys); free(vals);
                return 0;
            }
            h = (h + 1) & (size - 1);
        }
        // insert nums[i] -> i
        unsigned h2 = hash_int((unsigned)nums[i]) & (size - 1);
        while (keys[h2] != INT_MIN && keys[h2] != nums[i]) h2 = (h2 + 1) & (size - 1);
        keys[h2] = nums[i];
        vals[h2] = i;
    }

    printf("-1 -1\n");
    free(nums); free(keys); free(vals);
    return 0;
}