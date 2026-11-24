/*Exercise 2
Write a function Prime that returns 1 if its argument is a prime number and returns 0
otherwise.
*/

#include<stdio.h>
int prime(int x)
{
    int i;
    int a=1;
    for(i=2;i<x/2;i++){
    if(x%i==0)
a=0;
    return a;
    }
    return a;
}
int main()
{
    int num,a;
    printf("Enter a number : \n");
    scanf("%d",&num);
    a=prime(num);

    if(a==1)
    printf("Prime Number");
    else
    printf("Not prime");
    return 0;
}
