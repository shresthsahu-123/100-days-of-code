#include <stdio.h>

void maxSlidingWindow(int arr[], int n, int k) {
    for (int i = 0; i <= n - k; i++) {
        int windowMax = arr[i];
        
        // Find max in current window [i, i+k-1]
        for (int j = i; j < i + k; j++) {
            if (arr[j] > windowMax) {
                windowMax = arr[j];
            }
        }
        
        // Print with space separation
        if (i > 0) printf(" ");
        printf("%d", windowMax);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 3, -1, -3, 5, 3, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    
    printf("Maximum elements in windows of size %d: ", k);
    maxSlidingWindow(arr, n, k);
    
    return 0;
}
