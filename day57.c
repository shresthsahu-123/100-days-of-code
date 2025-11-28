#include <stdio.h>

void previousGreater(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int prevGreater = -1;
        
        // Check all elements to the left (right to left for closest)
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prevGreater = arr[j];
                break;
            }
        }
        
        // Print with comma separation
        if (i > 0) printf(", ");
        printf("%d", prevGreater);
    }
    printf("\n");
}

int main() {
    int arr[] = {15, 10, 18, 2, 4, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Previous greater elements: ");
    previousGreater(arr, n);
    
    return 0;
}
