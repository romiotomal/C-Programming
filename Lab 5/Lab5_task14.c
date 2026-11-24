#include <stdio.h>

int main() {
    int r, c;
    printf("Enter the number of rows and columns: ");
    scanf("%d%d", &r, &c);

    int arr[r][c];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int flag = 1;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if ((i == j && arr[i][j] != 1) || (i != j && arr[i][j] != 0)) {
                flag = 0;
                break;
            }
        }
        
    }

    if (flag==1) {
        printf("The matrix is an identity matrix.\n");
    } else {
        printf("The matrix is not an identity matrix.\n");
    }

    return 0;
}