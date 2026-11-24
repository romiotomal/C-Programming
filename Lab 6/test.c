#include<stdio.h>
int prime(int x)
{
    int i;
    int a=0;
    for(i=2;i<x/2;i++){
    if(x%i==0)
    
    return 0;
    }
    return 1;
}
int main()
{
    int num,a;
    printf("Enter a number : \n");
    scanf("%d",&num);
    prime(num);
   
    if(0)
        printf("Prime Number");
    else
    printf("Not prime");
    return 0;
}