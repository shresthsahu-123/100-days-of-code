#include <stdio.h>

int findRepeatingElement(int arr[], int n) {
    int xorArr = 0, xorRange = 0;

    // XOR all elements of array
    for (int i = 0; i < n; i++) {
        xorArr ^= arr[i];
    }

    // XOR all numbers from 1 to n-1
    for (int i = 1; i < n; i++) {
        xorRange ^= i;
    }

    // XOR of above two gives repeated element
    return xorArr ^ xorRange;
}

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements (one element repeated): ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int repeated = findRepeatingElement(arr, n);
    printf("Repeated element: %d\n", repeated);

    return 0;
}
