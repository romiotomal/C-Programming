#include <stdio.h>
int main()
{
    int n;
    printf("Enter size of array : ");
    scanf("%d", &n);
    int i;
    int j;
    int arr[n];

    printf("Enter the elements of array :\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("\n");
    int max = arr[0];
    
    for (i = 0; i < n; i++){
        if (max < arr[i])
        max = arr[i];
    }
    printf(" Max : %d\n",max);
    int smax = arr[0];
    for (j=0;j<n;j++)
    {
        if (arr[j] > smax &&  arr[j] != max)
            smax = arr[j];
    }
    printf("The second max :%d",smax);
    return 0;
}
