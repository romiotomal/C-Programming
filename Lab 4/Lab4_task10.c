/*Write a C program to determine whether a given number is prime or not.
Test Data :
Input a number: 13
Expected Output :
13 is a prime number */
#include<stdio.h>
int main()
{
    int i,n,a;
    printf("Enter the number :");
    scanf("%d",&n);
   a=0;
    for(i=2;i<=n/2;i++){
        if(n%i==0){
           a=1;
           break;
        }
    }

    if(a==0)
        printf("Prime");
    else
        printf("Not prime");

    return 0;
}
