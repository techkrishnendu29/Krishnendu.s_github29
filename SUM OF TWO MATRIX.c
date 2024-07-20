#include <stdio.h>
#define ROWS 3
#define COLS 3
void readMatrix(int matrix[ROWS][COLS]) {
	int i,j;
    for (i = 0; i < ROWS; i++) {
        for ( j = 0; j < COLS; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}
void printMatrix(int matrix[ROWS][COLS]) {
		int i,j;
    for ( i = 0; i < ROWS; i++) {
        for ( j = 0; j < COLS; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
void addMatrices(int matrix1[ROWS][COLS], int matrix2[ROWS][COLS], int result[ROWS][COLS]) {
		int i,j;
    for ( i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}
int main() {
    int matrix1[ROWS][COLS], matrix2[ROWS][COLS], result[ROWS][COLS];
    printf("Enter elements of first matrix:\n");
    readMatrix(matrix1);
    printf("Enter elements of second matrix:\n");
    readMatrix(matrix2);
    addMatrices(matrix1, matrix2, result);
    printf("Sum of the matrices:\n");
    printMatrix(result);
    return 0;
}
