#include <stdio.h>

int main() {
    int n, i, pos, key;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n + 1]; // Extra space for new element

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to insert (1 to %d): ", n + 1);
    scanf("%d", &pos);

    if (pos < 1 || pos > n + 1) {
        printf("Invalid position!\n");
        return 1;
    }

    printf("Enter the element to insert: ");
    scanf("%d", &key);

    // Shift elements from position onwards to right
    for (i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert new element at the given position
    arr[pos - 1] = key;
    n++; // Increase size

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
