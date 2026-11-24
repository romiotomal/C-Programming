#include <stdio.h>
int main()
{
    int r;
    printf("Enter row number : ");
    scanf("%d",&r);
    int c;
    printf("Enter coloum number : ");
    scanf("%d",&c);
    int arr [r][c];
    int i,j;
    printf("Enter row and coloum elements  : \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
        scanf("%d",&arr[i][j]);
        }
    }
        printf("\n");
    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
                printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    return 0;

}




/*
#include<stdio.h>
int main()
{
    int arr[10];
    int i,j;
    printf("Enter array elements : \n");
    for(i=0;i<10;i++)
    scanf("%d",&arr[i]);
    printf("\n");
    int temp;
    for(j=i-1,i=0;i<j;i++,j--){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    printf("Your reverse order....\n");
    for(i=0;i<10;i++)
    printf(" %d",arr[i]);


    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    int arr[10];
    int brr[10];
    int i;
    printf("Enter array elements : \n");
    for(i=0;i<10;i++)
    scanf("%d",&arr[i]);
    printf("\n");
    for(i=0;i<10;i++)
        brr[i]=arr[9-i];
    for(i=0;i<10;i++)
            printf(" %d",brr[i]);
            return 0;
}


*/





