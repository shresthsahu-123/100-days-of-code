#include <stdio.h>

int main() {
    int n, i, key, pos, j;

    printf("Enter the number of elements (sorted array): ");
    scanf("%d", &n);

    int arr[n + 1];  // Extra space for new element

    printf("Enter %d elements in sorted order:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &key);

    // Find the position to insert new element
    for (pos = 0; pos < n; pos++) {
        if (arr[pos] > key) {
            break;
        }
    }

    // Shift elements to right to make space
    for (j = n; j > pos; j--) {
        arr[j] = arr[j - 1];
    }

    // Insert the key at the found position
    arr[pos] = key;
    n++;  // Increase array size

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
