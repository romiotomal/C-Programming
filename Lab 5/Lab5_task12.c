ji#include <stdio.h>
int main() {
    int matrix[10][10], transpose[10][10];
    int rows, cols, i, j;
    printf("Input the rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    printf("Input elements in the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("Element - [%d],[%d] : ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    printf("The matrix is:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%d", matrix[i][j]);
        }
        printf("\n");
    }

    printf("The transpose of a matrix is:\n");
    for(i = 0; i < cols; i++) {
        for(j = 0; j < rows; j++) {
            printf("%d", transpose[i][j]);
        }
     printf("\n");
    }

    return 0;
}
