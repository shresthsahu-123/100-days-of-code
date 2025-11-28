#include <stdio.h>

int maxSubarraySum(int arr[], int n, int k) {
    if (k > n) return -1;  // Invalid case
    
    int maxSum = 0;
    // Calculate sum of first subarray of size k
    for (int i = 0; i < k; i++) {
        maxSum += arr[i];
    }
    
    int currentSum = maxSum;
    // Sliding window to find max sum of size k
    for (int i = k; i < n; i++) {
        currentSum += arr[i] - arr[i - k];
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }
    
    return maxSum;
}

int main() {
    int arr[] = {1, 4, 2, 10, 23, 3, 1, 0, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k;
    
    printf("Enter subarray size k: ");
    scanf("%d", &k);
    
    int result = maxSubarraySum(arr, n, k);
    if (result == -1) {
        printf("Invalid input: k is larger than array size.\n");
    } else {
        printf("Maximum sum of subarrays of size %d: %d\n", k, result);
    }
    
    return 0;
}
