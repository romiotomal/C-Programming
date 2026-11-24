#include <stdio.h>
int main()
{
    int r;
    printf("Enter the row number : ");
    scanf("%d", &r);
     int c;
    printf("Enter the column number : ");
    scanf("%d", &c);
    int arr[r][c];
    int i, j;
      printf("Enter array elemeants : \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The matrix is :\n");
    for( i=0;i<r;i++){
        for( j=0;j<c;j++){
            printf("%d\t",arr[i][j]);

        }
        printf("\n");
    }
    int n;

    printf("Enter a number : ");
    scanf("%d",&n);
     for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if(n==arr[i][j]){
                printf("The element Found at the position in the matrix is: %d,%d",i,j );
            }
        }
    }

    return 0;
}
