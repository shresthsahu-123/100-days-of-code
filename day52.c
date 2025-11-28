#include <stdio.h>

int findCeilIndex(int arr[], int n, int x) {
    int low = 0, high = n - 1, ceilIndex = -1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] >= x) {
            ceilIndex = mid;  // Potential ceil found
            high = mid - 1;   // Search left for first occurrence
        } else {
            low = mid + 1;    // Search right
        }
    }
    return ceilIndex;
}

int main() {
    int arr[] = {1, 2, 4, 4, 5, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;
    
    printf("Enter x: ");
    scanf("%d", &x);
    
    int index = findCeilIndex(arr, n, x);
    printf("%d\n", index);
    
    return 0;
}
