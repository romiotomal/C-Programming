/*Write a program in C to display a pattern like a right angle triangle using an asterisk.
The pattern like :
1
1 2
1 2 3
1 2 3 4
*/
#include<stdio.h>
int main()
{
    int i,j,n,a;
    printf("Enter the value of n :");
    scanf("%d",&n);
    a=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            {
            printf("%d ",a);
            a++;
            }
            printf("\n");
    }
    return 0;
}
