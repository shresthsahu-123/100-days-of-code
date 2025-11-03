#include <stdio.h>

int main() {
    int n, i, key, foundIndex = -1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];  // Declare array of size n

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Linear search
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex != -1) {
        printf("Element %d found at index %d.\n", key, foundIndex);
    } else {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}
