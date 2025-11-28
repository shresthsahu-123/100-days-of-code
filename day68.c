#include <stdio.h>

int findMissingNumber(int arr[], int n) {
    int totalSum = n * (n + 1) / 2;
    int arrSum = 0;
    for (int i = 0; i < n; i++) {
        arrSum += arr[i];
    }
    return totalSum - arrSum;
}

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int arr[n-1];
    printf("Enter %d elements (0 to %d except one): ", n-1, n);
    for (int i = 0; i < n-1; i++) {
        scanf("%d", &arr[i]);
    }
    
    int missing = findMissingNumber(arr, n-1);
    printf("Missing number: %d\n", missing);
    
    return 0;
}
