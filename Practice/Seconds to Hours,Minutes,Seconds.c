#include<stdio.h>
int main()
{
    int h,m,s;
    printf("Enter Seconds :");
    scanf("%d",&s);
    h=s/3600;
    s=s%3600;
    m=s/60;
    s=s%60;
    printf("Calculated Time :%d Hours",h);
      printf(" %d Minutes",m);
        printf(" %d Seconds",s);
    return 0;
}
