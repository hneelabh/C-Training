#include <stdio.h>

void circularShiftLeft(int arr[], int size, int shift) {
    int temp[shift];
    for (int i = 0; i < shift; i++) {
        temp[i] = arr[i];
    }
    for (int i = 0; i < size - shift; i++) {
        arr[i] = arr[i + shift];
    }
    for (int i = 0; i < shift; i++) {
        arr[size - shift + i] = temp[i];
    }
}

int main() {
    int rows, cols, shift;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    printf("Enter shift value: ");
    scanf("%d", &shift);

    int matrix[rows][cols];

    printf("Enter elements of the matrix (%dx%d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < rows; i++) {
        circularShiftLeft(matrix[i], cols, shift);
    }

    printf("Shifted matrix is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}