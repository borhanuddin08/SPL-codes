
#include <stdio.h>

void InputMatrix(int matrix[][5], int rows, int cols) {
    printf("Enter the matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}


void ShowMatrix(int matrix[][5], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

void ScalarMultiply(int matrix[][5], int rows, int cols, int scalar) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] *= scalar;
        }
    }
}

int main() {
    int matrix[3][5];
    int scalar;

    InputMatrix(matrix, 3, 5);

    printf("Enter a scalar value: ");
    scanf("%d", &scalar);

    printf("Original matrix:\n");
    ShowMatrix(matrix, 3, 5);

    ScalarMultiply(matrix, 3, 5, scalar);

    printf("\nMultiplied by %d:\n", scalar);
    ShowMatrix(matrix, 3, 5);

    return 0;
}
