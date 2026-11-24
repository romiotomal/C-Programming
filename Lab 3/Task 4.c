/*Program-3: Write a C program to input a number. If the number is even, print its square
otherwise print its cube.*/
#include<stdio.h>
int main()
{
    int n,a;
    printf("Enter a value :");
    scanf("%d",&n);
    if(n%2==0)
      {

    a=n*n;
        printf("%d",a);
      }
    else
  {

    a=n*n*n;
    printf("%d",a);
  }
    return 0;
}
