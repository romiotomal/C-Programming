/*Write a C program to check whether a number is a palindrome or not.
*/
#include<stdio.h>
int main()
{
    int n,a,b,i;
    printf("Enter the number:");
    scanf("%d",&n);
    i=n;
    b=0;
    while(1)
    {
        a=n%10;
        b=b*10+a;
        n=n/10;
        if (n==0)
            break;
    }
    if(b==i)
        printf("a palindrome number");
    else
        printf("Its not a palindrome number");
    return 0;
}
