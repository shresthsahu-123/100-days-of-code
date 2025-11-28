#include <stdio.h>

void nextGreater(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int nextGreater = -1;
        
        // Check all elements to the right
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                nextGreater = arr[j];
                break;
            }
        }
        
        // Print with comma separation
        if (i > 0) printf(", ");
        printf("%d", nextGreater);
    }
    printf("\n");
}

int main() {
    int arr[] = {4, 5, 2, 25};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Next greater elements: ");
    nextGreater(arr, n);
    
    return 0;
}
