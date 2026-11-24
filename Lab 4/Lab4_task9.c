/*Write a C program to check whether a given number is an Armstrong number or not
[Hint: Armstrong number is a number that is equal to the sum of cubes of its
digits].
Test Data :
Input a number: 153
Expected Output :
153 is an Armstrong number.
*/
#include<stdio.h>
int main()
{
    int n,sum,i,A;
    printf("Enter the Number :");
    scanf("%d",&n);
    sum=0;
    i=n;
    while(1)
    {
        A=n%10;
        sum=A*A*A+sum;
        n=n/10;
       if(n==0)
        break;
    }
    printf("Sum :%d\n",sum);
    if(i==sum)
        printf("%d.An Armstrong number",i);
    else
        printf("%d.Its not Armstrong number",i);
    return 0;
}
