#include <stdio.h>

void multiplyMatrices(int rows, int cols, int first[rows][cols], int second[rows][cols], int result[rows][cols]) {
    int i, j, k;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            result[i][j] = 0;
            for (k = 0; k < cols; k++) {
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }
}

int main() {
    int i, j, rows, cols;
    int first[rows][cols], second[rows][cols], result[rows][cols];

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter elements of first matrix (%dx%d):\n", rows, cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &first[i][j]);
        }
    }
    printf("Enter elements of second matrix (%dx%d):\n", rows, cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &second[i][j]);
        }
    }
    multiplyMatrices(rows, cols, first, second, result);
    printf("Result matrix is:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}