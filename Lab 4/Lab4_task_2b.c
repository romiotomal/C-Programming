/*You have to take n numbers of input from keyboard using for loop and print the
numbers*/
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
  i=i+2;
}
    printf("Sum= %d",sum);
    return 0;
}
