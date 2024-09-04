#include <stdio.h>
#define MAX_ROWS 10
#define MAX_COLS 10
#define MAX_SIZE 100
struct SparseMatrix {
    int row;
    int col;
    int value;
};
void readMatrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols) {
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}
void displayMatrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols) {
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
void convertToSparseMatrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols, struct SparseMatrix sparse[MAX_SIZE]) {
    int k = 1; // index for sparse matrix, starting from 1
    sparse[0].row = rows;
    sparse[0].col = cols;
    sparse[0].value = 0; // number of non-zero elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] != 0) {
                sparse[k].row = i;
                sparse[k].col = j;
                sparse[k].value = matrix[i][j];
                k++;
            }
        }
    }
    sparse[0].value = k - 1; // set the count of non-zero elements
}
void displaySparseMatrix(struct SparseMatrix sparse[MAX_SIZE]) {
    printf("\nSparse Matrix Representation:\n");
    printf("Row\tColumn\tValue\n");
    for (int i = 0; i <= sparse[0].value; i++) {
        printf("%d\t%d\t%d\n", sparse[i].row, sparse[i].col, sparse[i].value);
    }
}
int main() {
    int matrix[MAX_ROWS][MAX_COLS];
    int rows, cols;
    struct SparseMatrix sparse[MAX_SIZE];
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);
    if (rows > MAX_ROWS || cols > MAX_COLS) {
        printf("Exceeded maximum matrix size.\n");
        return 1;
    }
    readMatrix(matrix, rows, cols);
    displayMatrix(matrix, rows, cols);
    convertToSparseMatrix(matrix, rows, cols, sparse);
    displaySparseMatrix(sparse);
    return 0;
}