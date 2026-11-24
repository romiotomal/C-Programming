/*Write a program that prints in two columns n even numbers starting from 2, and a
running sum of those values. For example suppose user enters 5 for n, and then the
program should generate the following table: (use only for loops)
Enter n (the number of even numbers): 5

Value Sum
2 2
4 6
6 12
8 20
10 30
*/
#include<stdio.h>
int main()
{
    int sum=0,i,n;
    printf("Enter the value of n :");
    scanf("%d",&n);
    printf("Value   sum\n");
    for (i=2;i<=n;i+=2)
    {
        sum=sum+i;
        printf("%d    ",i);
        printf("   %d\n",sum);
    }
    return 0;
}
