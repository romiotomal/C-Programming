/*
Write a C program to find the reverse of any number using functions. The number
should be passed as a parameter in the called function.
Example:
Input number: 12345
Output reverse: 54321
*/
#include<stdio.h>
int reverse(int a)
{
    int x,y;
    x=0;
    while(a!=0)
    {
        y = a % 10;
        x = x * 10 + y;
        a=a/10;

    }
    return x;
}
int main()
{
    int num,x;
    printf("Enter a number : \n");
    scanf("%d",&num);
    x=reverse(num);
    printf("The number in reverse order is :\n %d", x);
    return 0;
}