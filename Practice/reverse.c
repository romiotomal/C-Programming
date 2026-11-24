#include<stdio.h>
int main()
{
    int n,a[10],b[10];
    int i;
   /* printf("Enter the number of elemente : ");
    scanf("%d",&n); */
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
        printf("reverse order\n");
    for(i=0;i<n;i++){
        b[i]=a[9-i];
        printf("%d\n",b[i]);
}

    return 0;
}

