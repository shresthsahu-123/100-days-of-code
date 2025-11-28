#include <stdio.h>

int majorityElement(int nums[], int n) {
    // Boyer-Moore Voting Algorithm
    int candidate = nums[0];
    int count = 1;
    
    for (int i = 1; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }
    
    // Verify candidate appears > n/2 times
    int freq = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate) {
            freq++;
        }
    }
    
    return (freq > n / 2) ? candidate : -1;
}

int main() {
    int nums[] = {2, 2, 1, 1, 1, 2, 2};
    int n = sizeof(nums) / sizeof(nums[0]);
    
    int result = majorityElement(nums, n);
    printf("%d\n", result);
    
    return 0;
}
