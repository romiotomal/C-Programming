/*You have to add series of integer numbers using while loop and take a number `n` as
input. */
#include <stdio.h>
int main()
{
    int i,n,sum;
    printf("Enter value of n= ");
    scanf("%d",&n);
    i=1;
    sum=0;
while(i<=n){
  sum=sum+i;
  i=i+1;
}
printf("Sum= %d",sum);
    return 0;
}
