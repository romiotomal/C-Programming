/*Write a program that will take two integer value x, y as input and calculate. Use loop
(any type of) statement to solve the problem. */
#include<stdio.h>
int main()
{
    int i,x,y,ans;
    printf("Enter the value of x & y :");
    scanf("%d%d",&x,&y);
    ans=1;
    for (i=1;i<=y;i++)
    ans=ans*x;
    printf("Answer: %d",ans);
    return 0;

}
