#include <stdio.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

int maxProduct(int* nums, int numsSize) {
    if (numsSize == 0) return 0;

    int max_so_far = nums[0];
    int min_so_far = nums[0];
    int result = nums[0];

    for (int i = 1; i < numsSize; i++) {
        int curr = nums[i];

        // If current number is negative, max and min swap their potential
        if (curr < 0) {
            int temp = max_so_far;
            max_so_far = min_so_far;
            min_so_far = temp;
        }

        // The max/min at this position is either the number itself
        // or the number multiplied by the previous max/min
        max_so_far = MAX(curr, max_so_far * curr);
        min_so_far = MIN(curr, min_so_far * curr);

        result = MAX(result, max_so_far);
    }

    return result;
}

int main() {
    int nums[] = {2, 3, -2, 4, -1};
    int size = sizeof(nums) / sizeof(nums[0]);
    
    printf("Maximum Product Subarray: %d\n", maxProduct(nums, size));
    
    return 0;
}
