#include <stdio.h>

int firstOccurrence(int nums[], int n, int target) {
    int low = 0, high = n - 1, first = -1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            first = mid;
            high = mid - 1;  // Continue left for first
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return first;
}

int lastOccurrence(int nums[], int n, int target) {
    int low = 0, high = n - 1, last = -1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            last = mid;
            low = mid + 1;   // Continue right for last
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return last;
}

int main() {
    int nums[] = {1, 3, 5, 5, 5, 5, 67, 123, 125};
    int n = sizeof(nums) / sizeof(nums[0]);
    int target = 5;
    
    int first = firstOccurrence(nums, n, target);
    int last = lastOccurrence(nums, n, target);
    
    if (first == -1) {
        printf("-1 -1\n");
    } else {
        printf("%d %d\n", first, last);
    }
    
    return 0;
}
