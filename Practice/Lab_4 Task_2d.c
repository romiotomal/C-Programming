/*
1+2+4+7+11
*/
#include<stdio.h>
int  main()
{
    int sum=0,i,j,n;
    printf("Enter the order n :");
    scanf("%d",&n);
    j=1;
    for(i=1;i<=n;i++)
       {
       sum=j+sum;
       j=j+i;
       }
        printf("%d",sum);
        return 0;


}
