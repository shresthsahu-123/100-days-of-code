#include <stdio.h>

void twoSum(int nums[], int n, int target) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d\n", i, j);
                return;
            }
        }
    }
    printf("-1 -1\n");
}

int main() {
    int nums[] = {2, 7, 11, 15};
    int n = sizeof(nums) / sizeof(nums[0]);
    int target;
    
    printf("Enter target: ");
    scanf("%d", &target);
    
    twoSum(nums, n, target);
    
    return 0;
}
