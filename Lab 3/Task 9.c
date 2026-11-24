/*Program-22: Write a C program to check whether a number is divisible by 5 and 11 or
not.*/
#include<stdio.h>
int main()
{
    int n;
    printf ("Enter the value of n:");
    scanf("%d",&n);
    if(n%5==0 && n%11==0)
        printf("%d isDivisible",n);
    else
        printf("%d is Not divisible",n);
    return 0;
}
