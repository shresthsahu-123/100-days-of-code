#include <stdio.h>

int main() {
    int rows, cols, i, j, start_row, start_col;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Diagonal traversal of the matrix:\n");

    // Traverse from first row
    for (start_col = 0; start_col < cols; start_col++) {
        i = 0;
        j = start_col;
        while (i < rows && j >= 0) {
            printf("%d ", matrix[i][j]);
            i++;
            j--;
        }
    }

    // Traverse from last column minus the first element (already included)
    for (start_row = 1; start_row < rows; start_row++) {
        i = start_row;
        j = cols - 1;
        while (i < rows && j >= 0) {
            printf("%d ", matrix[i][j]);
            i++;
            j--;
        }
    }

    printf("\n");

    return 0;
}
