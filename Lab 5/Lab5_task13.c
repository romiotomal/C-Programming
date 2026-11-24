#include <stdio.h>

int main() {
    int matrix[10][10];
    int size, i, j, rightDiagonalSum = 0;

    printf("Input the size of the square matrix: ");
    scanf("%d", &size);

    printf("Input elements in the matrix:\n");
    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            printf("Element - [%d],[%d] : ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The matrix is:\n");
    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < size; i++) {
        rightDiagonalSum += matrix[i][size - 1 - i];
    }
    printf("\nAddition of the right Diagonal elements is: %d\n", rightDiagonalSum);

    return 0;
}
