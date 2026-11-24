/*Write a C program to convert a given integer (in seconds) to hours, minutes and
seconds.*/
#include<stdio.h>
int main()
{
    int h,m,s;
    printf("Enter Seconds :");
    scanf("%d",&s);
    h=s/3600;
    m=(s%3600)/60;
   s=(s%3600)%60;     //s=s%((h*3600)+(m*60))
    printf("Calculated Time :%d Hours",h);
      printf(" %d Minutes",m);
        printf(" %d Seconds",s);
    return 0;
}
