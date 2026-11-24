/*Write a program that will calculate factorial number. For this you have take an integer number as
input.5
5!= 5*4*3*2*1 = 120
*/
#include<stdio.h>
int main()
{
    float f=1,i,n;
    printf("Enter the value of n :");
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("Ans :%.2f",f);
    return 0;

}
