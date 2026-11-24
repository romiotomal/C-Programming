/*Write a program in C to display a pattern like a right angle triangle using an asterisk.
The pattern like :
1
12
123
1324
*/
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the value of n :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            {
            printf("%d",j);
            }
            printf("\n");
    }
    return 0;
}
