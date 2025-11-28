#include <stdio.h>

void firstNegative(int arr[], int n, int k) {
    for (int i = 0; i <= n - k; i++) {
        int firstNeg = 0;
        
        // Find first negative in current window [i, i+k-1]
        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                firstNeg = arr[j];
                break;
            }
        }
        
        // Print with space separation
        if (i > 0) printf(" ");
        printf("%d", firstNeg);
    }
    printf("\n");
}

int main() {
    int arr[] = {12, -1, -7, 8, -15, 30, 16, 28};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    
    printf("First negative in windows of size %d: ", k);
    firstNegative(arr, n, k);
    
    return 0;
}
