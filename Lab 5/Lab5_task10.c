#include <stdio.h>

int main() {
    int matrix1[4][4], matrix2[4][4], sum[4][4];
    int size, i, j;
    printf("Input the size of the square matrix (less than 5): ");
    scanf("%d", &size);
      if (size >= 5 || size <= 0) {
        printf("Invalid size. Please enter a number between 1 and 4.\n");
        return 1;
    }

    printf("Input elements in the first matrix:\n");
    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            printf("Element - [%d],[%d] : ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Input elements in the second matrix:\n");
    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            printf("Element - [%d],[%d] : ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }
  
    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
       printf("\n");
    }

    printf("The First matrix is:\n");
    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }
    printf("The Second matrix is:\n");
    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            printf("%d ", matrix2[i][j]);
    
        }
       printf("\n");
    }

    printf("The Addition of two matrix is:\n");
    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
