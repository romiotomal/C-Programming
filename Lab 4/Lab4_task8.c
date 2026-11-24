/*Write a C program to check whether a given number is a 'Perfect' number or not [Hint:
A perfect number is a positive integer that is equal to the sum of its proper
divisors].
Test Data :
Input the number : 56
Expected Output :
The positive divisor : 1 2 4 7 8 14 28
The sum of the divisor is : 64
So, the number is not perfect.
*/
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the number :");
    scanf("%d",&n);
    printf("The positive divisor :");

    for(i=1;i<=n/2;i++){
        if(n%i==0)
    {
        printf(" %d",i);
        sum=sum+i;
    }

    }
      printf("\nThe sum :%d",sum);
    if(sum==n)
        printf("\nIts a perfect number");
    else
        printf("\nIts not a perfect number");
    return 0;
}
