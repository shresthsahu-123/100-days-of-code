#include <stdio.h>

int main() {
    int n, i, j, key, found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to delete: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = 1;
            // Shift subsequent elements left by one position
            for (j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            n--;  // Reduce the size of the array
            break;
        }
    }

    if (found) {
        printf("Array after deletion:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}
