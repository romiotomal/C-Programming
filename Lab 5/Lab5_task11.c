#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    int i, j, k;

    printf("Input the rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Input the rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);


    int mat1[r1][c1], mat2[r2][c2], result[r1][c2];

    printf("Input elements in the first matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            printf("Element - [%d],[%d] : ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Input elements in the second matrix:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            printf("Element - [%d],[%d] : ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }

    for (i = 0; i < r1; i++)
        for (j = 0; j < c2; j++)
            result[i][j] = 0;

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            for (k = 0; k < c1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
   
    printf("The multiplication of two matrix is:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
